class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0,mid,prev=nums[0];
        while(low<=high){
            mid=low+(high-low)/2;
            if(low==high){
                return low;
            }
            if(nums[mid]>nums[mid+1]){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};
