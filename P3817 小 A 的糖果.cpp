#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
ll a[N];
void solve() {
	ll n,m,num=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>m){
			num+=a[i]-m;
			a[i]=m;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]+a[i+1]>m){
			num+=a[i]+a[i+1]-m;
			a[i+1]-=a[i]+a[i+1]-m;
		}
	}
	cout<<num;
	
}
int main() {
	solve();
	return 0;
}
