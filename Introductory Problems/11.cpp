#include<bits/stdc++.h>
using namespace std;
#define ll long long






void helpcode(int A,int B){
    if ((2 * A - B) % 3 || (2 * A - B) < 0 || (2 * B - A) % 3 || (2 * B - A) < 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
void solve(){
    int a,b;
    cin>>a>>b;
    helpcode(a,b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}