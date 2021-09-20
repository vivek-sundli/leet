// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int mn=INT_MAX;
        vector<int> allBads;
        int high=n,low=1,mid;
        while(low<=high){
            mid= low+(high-low)/2;
            if(isBadVersion(mid)==true){
                mn=min(mid,mn);
                //allBads.push_back(mid);
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return mn;//*min_element(allBads.begin(),allBads.end());
    }
};
