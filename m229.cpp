class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int> s;
        unordered_map<int,int> mp;
        vector<int> ans;
        int n=nums.size();
        for(auto i: nums){
            mp[i]++;
        }
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(auto i: mp){
            if(i.second>n/3){
                ans.push_back(i.first);
            }
        }
        return ans;
        }
};
