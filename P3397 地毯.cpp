#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int xl,xr,yl,yr;
int a[1005][1005];
int b[1005][1005];
void get(){
	a[xl][yl]++;
	a[xl][yr+1]--;
	a[xr+1][yl]--;
	a[xr+1][yr+1]++;
}
void solve() {
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>xl>>yl>>xr>>yr;
		get();
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[i][j]=a[i][j]+b[i-1][j]+b[i][j-1]-b[i-1][j-1];
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
