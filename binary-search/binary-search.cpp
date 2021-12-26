class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        int end=nums.size()-1;
        int start=0;
        int mid;
        while(start<=end){
            
            mid= start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid] > target){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        
        return -1;
    }
};