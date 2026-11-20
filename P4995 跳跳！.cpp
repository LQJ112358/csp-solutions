#include<bits/stdc++.h>
using namespace std;
#define ll long long
int h[305];
void solve() {
	ll n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	sort(h+1,h+1+n);
	for(int i=1;i<=n/2;i++){
		sum+=(h[n+1-i]-h[i-1])*(h[n+1-i]-h[i-1]);
		sum+=(h[n+1-i]-h[i])*(h[n+1-i]-h[i]);
	}
	if(n%2==1){
		sum+=(h[n/2]-h[n/2+1])*(h[n/2]-h[n/2+1]);
	}
	cout<<sum;
	
}
int main() {
	solve();
	return 0;
}
