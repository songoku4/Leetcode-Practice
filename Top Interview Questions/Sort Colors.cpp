class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = (int)nums.size();
        int first=0, second=0, third=0;
        
        for(int i=0; i<n;i++){
            if(nums[i]==0)
                first++;
            else if(nums[i]==1)
                second++;
                else
                    third++;       
        }  
                for(int i=0;i<first;i++){
                    nums[i]=0;
                }
                for(int i=first;i<first+second;i++){
                    nums[i]=1;                    
                }
                for(int i=first+second;i<first+second+third;i++){
                    nums[i]=2;
                }
        }
};