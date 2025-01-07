#include<bits/stdc++.h>
using namespace std;
#define int long long
int help(int n){
	int ans=0;
	if(n<=4){
		return 0;
	}
	while(n>0){
		ans+=n/5;
		n=n/5;
	}
	return ans;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	cout<<help(n)<<endl;
	return 0;
}