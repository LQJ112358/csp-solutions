#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
const int N=1e7+5;
ll dp[N];
void solve() {
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int t,v;
		cin>>t>>v;
		for(int j=1;j<=n;j++){
			if(j>=t)	dp[j]=max(dp[j],dp[j-t]+v);
		}
	}
	cout<<dp[n];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
