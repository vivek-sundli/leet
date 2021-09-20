class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0){
            return -1;
        }
        int low=0, res=-1 , mid, high=n-1;
        while(low<=high){
            mid = low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid] > nums[high]){
                if(target < nums[mid] && target >= nums[low]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else if(nums[mid] < nums[low]){
                    if(target > nums[mid] && target < nums[low]){
                        low=mid+1;
                    }else{
                        high=mid-1;    
                    }
            }else{
                if(target < nums[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }
        }
        return -1;
    }
};
