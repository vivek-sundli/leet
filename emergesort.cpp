class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> ans;
        for(;i<m && j<n;){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        
        if(i==m){
            for(;j<n;j++){
                ans.push_back(nums2[j]);
            }
        }
        if(j==n){
            for(;i<m;i++){
                ans.push_back(nums1[i]);
            }
        }
        for(int e=0;e<m+n;e++){
            nums1[e]=ans[e];
        }
    }
};
