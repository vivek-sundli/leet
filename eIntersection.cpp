class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> setans;
        for(int i:nums1){
            for(int j:nums2){
                if(i==j){
                    setans.insert(i);
                }
            }
        }
        for(int i:setans){
            ans.push_back(i);
        }
        return ans;
    }
};
