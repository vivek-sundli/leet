#include<bits/stdc++.h>

void displayKthDistance(priority_queue pq,int kth){
	cout<<pq[kth];
}

long long rocketDistance(x[i],y[i]){
	return x*x +y*y;
}

int main() {
	int t,k,q;
	cin>>t>>k;
	priority_queue<long long,classCompare> pq;
	while(t--){
		cin>>q;
		if(q==1){
			vector<int> x;
			vector<int> y;
			cin>>x>>y;
			pq.insert(rocketDistancex([i],y[i]));
		}else{
			displayKthDistance(pq,k);
		}
	}	
	return 0;
}
