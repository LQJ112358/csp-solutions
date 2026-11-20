#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
const int N=2e6+5;
int a[N];
void solve() {
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		int in;
		cin>>in;
		cout<<a[in]<<endl;
	}
	
}
int main() {
	solve();
	return 0;
}
