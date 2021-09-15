class Solution {
public:
    int squared(int n){
        int ans=0;
        while(n){
            ans+=pow(n%10,2);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        
        int slow=n,fast=n;
        do{
        
            slow=squared(slow);
            fast=squared(squared(fast));
        
        }while(slow!=fast);
        if(slow==1){
            return true;
        }else{
            return false;
        }
    }
};
