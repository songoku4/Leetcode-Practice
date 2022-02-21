class Solution(object):
    def __init__(self):
        self.result =[]
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        self.backtracking(nums,[])
        return self.result
    
    
    def backtracking(self,nums,permutation):
        if not nums:
            self.result.append(permutation)
        for i in range(len(nums)):
            self.backtracking(nums[:i]+nums[i+1:],permutation+[nums[i]])
            
        
        
        
