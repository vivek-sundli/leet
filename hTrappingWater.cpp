
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxLeft,maxRight;
        int max=0;
        //maxLeft
        for(int i=0;i<height.size();i++){
            if(i-1<0){
                maxLeft.push_back(max);
            }else{
                max=height[i-1]>max?height[i-1]:max;
                maxLeft.push_back(max);
            }
            //cout<<max<<" ";
        }
        cout<<endl;
        //maxRight
        max=0;
        for(int i=height.size()-1;i>=0;i--){
            if(i+1==height.size()){
                maxRight.push_back(max);
            }else{
                max=height[i+1]>max?height[i+1]:max;
                maxRight.push_back(max);
            }
        }
        reverse(maxRight.begin(),maxRight.end());
        /*
        for(auto i : maxRight){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i : height){
            cout<<i<<" ";
        }
        */
        vector<int> waterTrapped,minArr;
        for(int i=0;i<height.size();i++){
            if(maxLeft[i]<maxRight[i]){
                minArr.push_back(maxLeft[i]);
            }
            if(maxLeft[i]>maxRight[i]){
                minArr.push_back(maxRight[i]);
            }
            if(maxLeft[i]==maxRight[i]){
                minArr.push_back(maxRight[i]);
            }
            
        }
        //water trapped
        for(int i=0;i<height.size();i++){
            waterTrapped.push_back(minArr[i]-height[i]);//(maxLeft[i],maxRight[i])-height[i]);
        }
        //cout<<endl;
        /*for(auto i : waterTrapped){
            cout<<i<<" ";
        }*/
        
        int ans=0;
        for(int i=0;i<height.size();i++){
            if(waterTrapped[i]>0){
                ans+=waterTrapped[i];
            }
        }
        return ans;
    }
};
