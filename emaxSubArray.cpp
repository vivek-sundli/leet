//dp kadane
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,ans=nums[0],mx=0;
        int *dp = new int[nums.size()];
        dp[0]=nums[0];
        if(nums.size()<0){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            dp[i]=max(dp[i-1]+nums[i],nums[i]);
            if(dp[i]>ans){
                ans=dp[i];
            }
        }
        return ans;
    }
};
