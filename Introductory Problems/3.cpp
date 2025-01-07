#include<iostream>
#include<climits> 
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int n = str.length();
    int helpans = 1; 
    int ans = INT_MIN;
    int fchar=str[0];
    for (int i = 0;str[i]!='\0'; i++) { 
        if (str[i] == str[i + 1]) {
            helpans++;
        } else {
            if (ans <= helpans) {
                ans = helpans;
            }
            helpans = 1; 
        }
    }
    if (ans <= helpans) {
        ans = helpans;
    }
    cout << ans << endl;
    return 0;
}
