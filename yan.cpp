#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ren{
	int id;
	int t;
}dp[1005];

bool cmp(ren a, ren b){
	if(a.t!=b.t)	return a.t<b.t;
	return a.id<b.id;
		
}
void solve() {
	double s=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>dp[i].t;
		dp[i].id=i;
	}
	sort(dp+1,dp+n+1,cmp);
	for(int i=1;i<=n;i++){
	s+=dp[i].t*(n-i);
	cout<<dp[i].id<<" ";
	}
	cout<<endl;
	cout<<fixed<<setprecision(2)<<s/n;


}
int main() {
    solve();
    return 0;
}