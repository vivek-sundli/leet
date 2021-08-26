class Solution {
public:
    //stack<int> s;
    bool isPalindrome(int x) {
        stack<int> s;
        int temp=x;
        int digits =0;
        if(x<0){
            return false;
        }
        digits=0;
        while(x){
            s.push(x%10);
            digits++;
            x/=10;
        }
        for(int i=0;i<digits;i++){
            if(temp%10 == s.top()){
                s.pop();
                temp/=10;
            }
        }
        if(s.empty()){
            return true;
        }else{
            return false;
        }
    }
};
