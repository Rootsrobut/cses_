#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



ll solve(vector<ll>&v,int n){
	ll ans=0;
	for(int i=0;i<n-1;i++){
		if(v[i]>=v[i+1]){
			ans+=abs(v[i]-v[i+1]);
			v[i+1]=v[i];
		}
	}
	return ans;
}



int main(){
    int n;
    cin>>n;
    if(n==0 || n==1){
    	cout<<"0"<<endl;
    	return 0;
	}
    vector<ll>v(n,0);
    for(int i=0;i<n;i++){
    	cin>>v[i];
	}
	cout<<solve(v,n)<<endl;
	return 0;
}