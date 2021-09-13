//next permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        for(i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                break;
            }
        }
        if(i == 0){     
            reverse(nums.begin() , nums.end());     
        } 
        else {
            // 1 2 3
            int x=nums[i-1], small=i;           
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]>x && nums[j]<=nums[small]){
                    small=j;
                }
            }
            
            swap(nums[i-1] , nums[small]);
            sort(nums.begin()+i, nums.end());     
        }
    }
};
