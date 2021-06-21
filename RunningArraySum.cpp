//Checking Repo first commit
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> solutionsArray;
        int i,prev=0;
        for(i=0;i<nums.size();i++){
            solutionsArray.push_back(prev + nums[i]);
            prev = solutionsArray[i];
        }
        return solutionsArray;
    }
};
