#include<bits/stdc++.h>
using namespace std;
#define int long long


int help(int& row,int &col){
	if(row>col){
		//even
		if(row%2==0){
			return ((row)*(row))-(col-1);
		}else{   //odd
			return ((row-1)*(row-1))+(col);
		}
		
		
	}
	else{
		//even
		if(col%2==0){
			return ((col-1)*(col-1))+(row);
		}else{   //odd
		   return (((col)*(col))-(row-1));
	    }	
	}
}


void solve(){
	int row,col;
	cin>>row>>col;
	cout<<help(row,col)<<endl;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}