#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	int n,maxx=0,minn;
	cin>>n;
	int a[n];
	cin>>a[1];
	maxx=a[1];
	minn=a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
		minn=min(minn,a[i]);
	}
	cout<<maxx<<" "<<minn;
}
int main() {
	solve();
	return 0;
}
