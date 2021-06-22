//defang IP addresses
#include <iostream>


using namespace std;

string defangIPaddr(string address) {
    string solution;
    int j=0;
    for(int i=0;address[i]!=NULL;i++){
            if(address[i]=='.'){
                solution.append("[.]");
                //solution[j+1]=".";
                //solution[j+2]="]";
                j+=3;
            }
            else{
                solution[j]=address[i];
                j++;
            }
    }
    return solution;
}

int main()
{
    cout<<defangIPaddr("11.22.22.1");
    return 0;
}
