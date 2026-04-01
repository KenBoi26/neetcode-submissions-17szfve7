class Solution:
    def minWindow(self, s: str, t: str) -> str:
        l = 0
        r = 0

        if s == t:
            return t

        minimum_length = len(s)
        string_range = (-1,-1)

        d1 = dict() # the frequency of t
        d2 = dict() # the frequency of current window

        for i in t:
            if i in d1:
                d1[i] += 1
            else:
                d1[i] = 1

        have = 0
        need = len(d1)

        while r < len(s):
            d2[s[r]] = 1 + d2.get(s[r], 0)
            if s[r] in d1 and d2[s[r]] == d1[s[r]]:
                have += 1
            
            while have == need and l <= r:
                if minimum_length >= r-l+1:
                    minimum_length = r-l+1
                    string_range = (l,r)

                d2[s[l]] -= 1
                if s[l] in d1 and d2[s[l]] < d1[s[l]]:
                    have -= 1

                l += 1

            
            r += 1
        
        return s[string_range[0]:string_range[1]+1]
