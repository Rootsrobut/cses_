#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve(string str) {
    map<char, int> freq; 
    int n = str.length();
    for (char c : str) {
        freq[c]++;
    }
    int odd = 0; 
    char oddChar = 0; 
    for (auto it : freq) {
        if (it.second % 2 != 0) {
            odd++;
            oddChar = it.first;
        }
    }
    if (odd > 1) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    string half = ""; 
    for (auto it : freq) {
        half += string(it.second / 2, it.first); 
    }
    string result = half; 
    if (odd == 1) {
        result += oddChar; 
    }
    reverse(half.begin(), half.end()); 
    result += half; 
    cout << result << endl;
}

int main() {
    boost;
    string str;
    cin >> str;
    solve(str);
    return 0;
}
