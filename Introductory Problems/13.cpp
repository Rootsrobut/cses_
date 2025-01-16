#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);





void solve(int n) {
	vector<string>arr;
	arr.push_back("0");
	arr.push_back("1");
	 int i, j;
	for(i=2;i<(1<<n);i=i<<1){
		for(j=i-1;j>=0;j--){
			arr.push_back(arr[j]);
		}
		for (j = 0 ; j < i ; j++)
            arr[j] = "0" + arr[j];
        for (j = i ; j < 2*i ; j++)
            arr[j] = "1" + arr[j];    	
	}
	for (i = 0 ; i < arr.size() ; i++ )
        cout << arr[i] << endl;
   
}

int main() {
    boost;
    int n;
    cin >> n;
    solve(n);
    return 0;
}