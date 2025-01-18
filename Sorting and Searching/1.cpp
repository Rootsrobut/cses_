#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define setll set<ll>

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    setll s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    return 0;
}