#include <iostream> 
using namespace std;
#define int long long
#define mod 1000000007
int help(int x, int y) {
    int ans = 1;
    while (y > 0) {
        if (y & 1) {
            ans = (ans * x) % mod;
        }
        y = y >> 1;
        x = (x * x) % mod; 
    }
    return ans%mod; 
}

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int n;
    cin >> n; 
    if (n < 0) { 
        return 0;
    }
    cout << help(2, n) << endl; 
    return 0;
}
