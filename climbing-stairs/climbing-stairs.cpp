class Solution {
public:
    int helper(int n,unordered_map<int,int> &mp){
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        if(mp.find(n) !=mp.end()){
            return mp[n];
        }
        int ans = helper(n-1,mp) +helper(n-2,mp);
        mp[n]=ans;
        return ans;
    }
    
    int climbStairs(int n) {
        unordered_map<int,int> mp;
        return helper(n,mp);
    }
};