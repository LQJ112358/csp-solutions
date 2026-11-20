#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int n;
int a[N];
int sum[N];
int minn=10005,maxx=-10005;
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	for(int i=1;i<=n;i++){
		minn=min(minn,sum[i-1]);
		maxx=max(maxx,sum[i]-minn);
	}
	cout<<maxx;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
