class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        mx = max(piles)
        l = 1
        r = mx
        result = r

        while(l<=r):
            k = (l+r)//2
            sm = 0

            for i in piles:
                sm += int((i+k-1)/k)
            
            if sm <= h:
                ans = k
                r = k-1
            else:
                l = k+1
        
        return ans

        