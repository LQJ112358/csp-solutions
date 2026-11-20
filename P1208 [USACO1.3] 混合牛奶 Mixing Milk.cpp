#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e6+5;
struct man {
	ll money;
	ll num;
} v[N];
bool cmp(man a,man b) {
	return a.money<b.money;
}
void solve() {
	ll m,n,total=0;
	cin>>m>>n;
	for(int i=1; i<=n; i++) {
		cin>>v[i].money>>v[i].num;
	}
	sort(v+1,v+1+n,cmp);
	for(int i=1; i<=n; i++) {
		if(m>=v[i].num) {
			m-=v[i].num;
			total+=v[i].num*v[i].money;
		}
		else {
			total+=v[i].money*m;
			break;
		}
	}
	cout<<total;
}
int main() {
	solve();
	return 0;
}
