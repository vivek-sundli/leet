#include<iostream>
using namespace std;

int countNumBit(int num){
	int count=0;
	while(num){
		if(num&1){
			count++;
		}
		num = num>>1;
	}
	return count;
}

int countSetBits(int a,int b){
	int ans=0;
	for(int i=a;i<b;i++){
		ans+=countNumBit(i);
	}
	return ans;
}

int main() {
	int t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<countSetBits(a,b)<<endl;
	}
	//countSetBits(a,b);
	return 0;
}
