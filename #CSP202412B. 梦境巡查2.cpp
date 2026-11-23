#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
int n;
int a[N],b[N];
int d[N];
int suf[N],pre[N];
int ans(int x){
	return max(pre[x-1],suf[x]+b[x]);
}
void solve() {
	cin>>n;
	for(int i=0;i<n+1;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	d[0]=a[0];
	for(int i=1;i<=n;i++){
		d[i]=d[i-1]+a[i]-b[i];
	}
	pre[0]=d[0];
	for(int i=1;i<=n;i++){
		pre[i]=max(pre[i-1],d[i]);
	}
	suf[n]=d[n];
	for(int i=n-1;i>=0;i--){
		suf[i]=max(suf[i+1],d[i]);
	}
	for(int i=1;i<=n;i++){
		cout<<ans(i)<<" ";
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
