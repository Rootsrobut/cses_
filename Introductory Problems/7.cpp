#include<bits/stdc++.h>
using namespace std;
#define int long long


int help(int k){
	int totalway=((k*k)*((k*k)-1))/2;
	int totalwayattack=4*((k-1)*(k-2));
	return totalway-totalwayattack;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<help(i)<<endl;
	}
	return 0;
}