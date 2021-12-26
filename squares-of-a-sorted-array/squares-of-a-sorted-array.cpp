class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int k=j;
        vector<int> ans;
        
        while(i<=j){
            int start= pow(abs(nums[i]),2);
            int end = pow(abs(nums[j]),2);
            
            if(start>=end){
                ans.push_back(start);
                i++;
                
            }else{
                ans.push_back(end);
                j--;
                
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};