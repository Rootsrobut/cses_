#include <bits/stdc++.h>
using namespace std;
#define int long long
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

void solve(int n) {
    
}

int32_t main(){
    boost;
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a;
        cin>>a;
        solve(a);
    }
    return 0;
}