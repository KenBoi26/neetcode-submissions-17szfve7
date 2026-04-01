class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        result = []

        def dfs(i, total, current):
            if total == target:
                result.append(current.copy())
                return
            
            if i >= len(nums) or total > target:
                return
            
            current.append(nums[i])
            dfs(i, nums[i]+total, current)
            current.pop()
            dfs(i+1, total, current)
        
        dfs(0, 0, [])
        return result