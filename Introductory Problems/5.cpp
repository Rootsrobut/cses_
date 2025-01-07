#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(int n){
	if(n==1){
		cout<<n<<endl;
		return;
	}
	if(n==2 || n==3){
		cout<<"NO SOLUTION"<<endl;
		return;
	}
	if(n%2==0){
		 for(int i=2;i<=n;i=i+2){
			cout<<i<<" ";
	     }
	     for(int i=1;i<=n-1;i=i+2){
		    cout<<i<<" ";
         }
	}
	else{
		for(int i=n-1;i>=2;i=i-2){
			cout<<i<<" ";
	    }
	    for(int i=n;i>=1;i=i-2){
		    cout<<i<<" ";
        }
	}
	return;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    solve(n);
	return 0;
}
