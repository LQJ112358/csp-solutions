#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int dp[1005][1005];
int a[1005][1005];
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+a[i][j];
		}
	}
	int maxx=0;
	for(int i=1;i<=n;i++){
		maxx=max(maxx,dp[n][i]);
	}
	cout<<maxx;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
