#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
const int inf=1e8;
int a[1005];
int dp[10005];
void solve() {
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
		dp[i]=inf;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(j-a[i]>=0)	dp[j]=min(dp[j],dp[j-a[i]]+1);
		}
	}
	cout<<dp[m];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
