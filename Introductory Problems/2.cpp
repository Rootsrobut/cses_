#include<iostream>
#include<vector>
using namespace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	vector<bool>v(n+1,false);
	if (n==1 || n==0){
		return 0;
	}
	for(int i=0;i<n-1;i++){
		int a;
		cin>>a;
		v[a]=true;
	}
	for(int i=1;i<=n;i++){
		if(v[i]==false){
			cout<<i<<endl;
		}
	}
	return 0;
}