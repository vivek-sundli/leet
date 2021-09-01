class Solution {
public:
    int arrayNesting(vector<int>& nums) { 
        int maxlen=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            
            int currMax=0,prev,e=nums[i];
            nums[i]=-1;
            while(e != -1){
                currMax++;
                prev=nums[e];
                nums[e]=-1;
                e=prev;
            }
            cout<<endl<<"Current Max:"<<currMax<<endl;
            maxlen=max(maxlen,currMax);
        }
        return maxlen;
    }
};
