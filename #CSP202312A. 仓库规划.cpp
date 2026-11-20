#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1005][15];
int n,m;
int check(int d) {
	bool ok;
	for(int i=1;i<=n;i++){
		ok=true;
		for(int j=1;j<=m;j++){
			if(a[d][j]>=a[i][j]){
				ok=false;
			}
		}
		if(ok==true){
			return i;
		}
	}
	return 0;

}
void solve() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=n; i++) {
		cout<<check(i)<<endl;
	}

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	solve();
	return 0;
}
