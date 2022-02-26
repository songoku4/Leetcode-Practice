
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result = []
        
        subset = []
        def sbs(i):
            if i >=len(nums):
                result.append(subset.copy())
                return
            
            subset.append(nums[i])
            sbs(i+1)
            
            subset.pop()
            sbs(i+1)
            
        sbs(0)
        return result
        
