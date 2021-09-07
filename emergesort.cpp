class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j;
        vector<int> v(m+n);
        for(i=0,j=0;i<m || j<n;){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            if(nums1[i]>nums2[j]){
                v.push_back(nums2[j]);
                j++;
            }
            else{
                v.push_back(nums1[i]);
                i++;
            }
        }
        //when nums1 is fully trversed put nums2 in vector
        if(i==m){
            for(;j<n;j++){
                v.push_back(nums2[j]);
            }
        }
        //when nums2 is fully trversed put nums1 in vector
        if(j==n){
            for(;i<m;i++){
                v.push_back(nums1[i]);
            }
        }
        //vector to nums1
        for(int k=0;k<m+n;k++){
            nums1[i]=v[k];
        }
    }
};
