#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int  find(int x,int y){
	ll sum=0;
	if(y==1)	return 1;
	for(int i=1;i<=x-y;i++){
		sum+=find(x-i,y-1);
	}
	return sum;
}
void solve() {
	cin>>n>>m;
	if(n<m){
		cout<<"0";
		return;
	}
	cout<<find(n,m);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
