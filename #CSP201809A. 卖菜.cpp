#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1005];
int b[1005];
void solve() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	b[1]=(a[1]+a[2])/2;
	b[n]=(a[n]+a[n-1])/2;
	for(int i=2;i<n;i++){
	b[i]=(a[i-1]+a[i]+a[i+1])/3;
	}
	for(int i=1;i<=n;i++)
	cout<<b[i]<<" ";
}
int main() {
	solve();
	return 0;
}
