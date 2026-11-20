#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
struct match{
	int a;
	int b;	
}dp[N];
bool cmp(match n,match m){
return n.b<m.b;
}
void solve() {
	int n,now=0,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>dp[i].a>>dp[i].b;
	}
	sort(dp+1,dp+n+1,cmp);
	for(int i=1;i<=n;i++){
		if(now<=dp[i].b&&now<=dp[i].a){
			now=dp[i].b;
			sum++;
		}
	}
	cout<<sum;
}
int main() {
	solve();
	return 0;
}
