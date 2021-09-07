class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index,sum=0;
        bool flag=true;
        int max= *max_element(nums.begin(),nums.end());
        if(nums.size()==1){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==max){
                index=i;
                continue;
            }
            if(2*nums[i]>max){
                flag=false;
                break;
            }
        }
        if(flag){
            return index; 
        }
        return -1;
        
    }
};
