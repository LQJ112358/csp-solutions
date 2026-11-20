#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int n;
int a[N];
int sum[N];
int dp[N],maxx=-10000;
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	dp[1]=a[1];
	for(int i=2;i<=n;i++){
		dp[i]=max(a[i],dp[i-1]+a[i]);
		maxx=max(maxx,dp[i]);
	}
	cout<<maxx;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
