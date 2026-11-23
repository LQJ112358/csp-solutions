#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e5+5;
ll n,N,error,r;
ll a[M];
void solve() {
	cin>>n>>N;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	r=N/(n+1);
	
	ll cur=0,i=0,g=0;
	a[n+1]=N;
	while(cur<N){
		g=cur/r;
		ll y=min(a[i+1],(g+1)*r);
		error+=(y-cur)*abs(g-i);
//		cout<<error<<' ';
		cur=y;
		if(cur==a[i+1])
			i++;
	}
	cout<<error;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
