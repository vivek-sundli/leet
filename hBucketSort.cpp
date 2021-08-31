class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int mx= *max_element(nums.begin(),nums.end());
        int mn= *min_element(nums.begin(),nums.end());
        //bucketing
        int index;
        int n= nums.size();
        vector<int> maxBucket(n,INT_MIN);
        vector<int> minBucket(n,INT_MAX);
        
        float divide = (float)(mx-mn)/(float)(n-1);
        
        for(int i=0;i<n;i++){
            if(nums[i]==mn || nums[i]==mx){
                continue;
            }
            index=(nums[i]-mn)/divide;
            maxBucket[index]= max(maxBucket[i],nums[i]);
            minBucket[index]= min(minBucket[i],nums[i]);
            
        }
        int prev=mn;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(minBucket[i]==INT_MIN){
                continue;
            }
            ans=max(ans,minBucket[i]-prev);
            prev=minBucket[i];
        }
        ans=max(ans,mx-prev);
        return ans;
    }
};
