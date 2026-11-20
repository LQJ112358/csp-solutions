#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
ll n,m;
ll a[N];

bool find(int y) {
	ll num=0;
	for(int i=1; i<=n; i++) {
		num+=a[i]/y;
	}
	return num>=m;
}
int check() {
	int fst=1,lst=a[1];
	while(lst-fst>1) {
		ll mid=(fst+lst)/2;
		if(find(mid))	fst=mid;
		else lst = mid;
	}
	if(find(lst))	return lst;
	return fst;

}
void solve() {
	cin>>n>>m;
	int sum=0;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		sum+=a[i];
	}
	if(sum<m) {
		cout<<"0";
		return ;
	}
	sort(a+1,a+1+n);
	cout<<check();
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	solve();
	return 0;
}
