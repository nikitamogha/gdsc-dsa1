class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
          int sum=nums[0],maxi=nums[0];
        for(int i=1;i<nums.size();i++)
        {
             sum=std::max(nums[i],sum+nums[i]);
           maxi=std::max(maxi,sum);
        }
        return maxi;  
    }
    
    
};