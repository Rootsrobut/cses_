#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
int power(int x,int y){
    int ans=1;
    while(y>0){
        if(y&1) ans=(ans*x)%mod;
        x=(x*x)%mod;
        y=y>>1;
    }
    return ans;
}

void solve(int n,int st,int mid,int end) {
    if(n==1){
    	cout<<st<<" "<<end<<endl;
    	return;
	}
	solve(n-1,st,end,mid);
	cout<<st<<" "<<end<<endl;
	solve(n-1,mid,st,end);
	
    
}

int main(){
    boost;
    int n;
    cin>>n;
    cout<<power(2,n)-1<<endl;
    solve(n,1,2,3);
    return 0;
}