#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007
#define endl "\n"


void solve(string &str,set<string> &uniqueStrings) {
    do {
       uniqueStrings.insert(str);
    }
    while (next_permutation(str.begin(),str.end()));
}

int main(){
    boost;
    string str;
    getline(cin, str);
    sort(str.begin(),str.end());
    set<string> uniqueStrings;
    solve(str,uniqueStrings);
    cout << uniqueStrings.size() << "\n";
    for (auto str : uniqueStrings) {
        cout << str << "\n";
    }

    return 0;
}