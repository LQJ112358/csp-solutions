#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
ll n,m,maxx;
ll q[N];

bool check(int x) {
	ll sum=0;
	for(int i=1; i<=n; i++) {
		if(q[i]-x>0)	sum+=q[i]-x;
	}
	return	sum>=m;
}
int find() {
	int b=1,e=maxx;
	while(e-b>1) {
		int mid=(b+e)/2;
		if(check(mid))	b=mid;
		else e=mid;
	}
	if(check(e))	return e;
	return b;
}
void solve() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>q[i];
		maxx=max(maxx,q[i]);
	}

	cout<<find()<<endl;
}
int main() {
	solve();
	return 0;
}
