#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

string defangIPaddr(string address) {
    string solution;
    for(int i=0;address[i]!=NULL;i++){
            if(address[i]=='.'){
                solution += "[.]";
            }
            else{
                solution+=address[i];

            }
    }
    return solution;
}

int main()
{
    cout<<defangIPaddr("11.22.22.1");
    return 0;
}
