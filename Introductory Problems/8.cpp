#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(), c.end()
#define maxhe()                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
#define setbit(n) __builtin_popcountll(n)

void solvenextpart(int n)
{
    vector<int> setA, setB;
    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 4 == 1 || i % 4 == 2)
            {
                setA.push_back(i);
            }
            else
            {
                setB.push_back(i);
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 4 == 1 || i % 4 == 0)
            {
                setA.push_back(i);
            }
            else
            {
                setB.push_back(i);
            }
        }
    }
    cout << setA.size() << endl;
    for (auto val : setA)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << setB.size() << endl;
    for (auto val : setB)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    maxhe();
    ll n;
    cin >> n;
    if (n <= 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    ll sum = ((n) * (n + 1)) / 2;
    if (sum % 2 == 0)
    {
        cout << "YES" << endl;
        solvenextpart(n);
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}