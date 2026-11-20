#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[50005];
int L,N,M;
bool check(int x) {
	int m=0,lst=0;
	for(int i=1; i<=N; i++){
		if(a[i]-lst<x) {
			m++;
		} else lst = a[i];
	}
	if(m<=M)	return true;
	return false;
}
int find() {
	int l=0,r=L;
	while(r-l>1) {
		int mid=(l+r)/2;
		if(check(mid))	l=mid;
		else r=mid;
	}
	if(check(r))	return r;
	return l;
}
void solve() {
	cin>>L>>N>>M;
	for(int i=1; i<=N; i++) {
		cin>>a[i];
	}
	a[N+1]=L;
	sort(a+1,a+2+N);
	cout<<find()<<endl;
}
int main() {
	solve();
	return 0;
}
