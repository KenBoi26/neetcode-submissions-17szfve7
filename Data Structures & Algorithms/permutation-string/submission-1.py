class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        m = len(s1)
        n = len(s2)

        l = 0
        r = m

        flag = False


        while(r<=n):
            # print(s1, s2[l:r])
            temp = list(s1)
            for i in s2[l:r]:
                if i not in temp:
                    break
                else:
                    temp.remove(i)
                
                if len(temp) == 0:
                    flag = True
            l+=1
            r+=1


        return flag