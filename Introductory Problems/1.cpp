#include<iostream>
using namespace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	cout<<n<<" ";
	while(n!=1){
		if(n%2==0){
			n=n/2;
		}
		else{
			n=n*3+1;
		}
		cout<<n<<" ";
	}
	return 0;
}