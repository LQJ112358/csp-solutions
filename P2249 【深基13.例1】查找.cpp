#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
int n,m;
int a[N];
int find(int k) {
	int b=1,e=n;
	while(e-b>1) {
		int mid=(b+e)/2;
		if(k>a[mid])	b=mid+1;
		if(k<=a[mid])	e=mid;
	}
	if(k==a[b])	return b;
	else if(k==a[e])	return e;
	else	return -1;
}
void solve() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<m; i++) {
		int k=0;
		cin>>k;
		cout<<find(k)<<" ";
	}
}
int main() {
	solve();
	return 0;
}
