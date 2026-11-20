#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
ll n,m;
ll a[1005];
ll dp[10005];
void solve() {
 	cin>>n>>m;
 	for(int i=1;i<=n;i++){
 		cin>>a[i];
	 }
	dp[0]=1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(i>=a[j]){
				dp[i]+=dp[i-a[j]];
				dp[i]=dp[i]%mod;
			}
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
