#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
int n,m;
int v[N];

bool check(int x){
	int cnt=1;
	int cur=v[1];
	for(int i=1;i<=n;i++){
		if(v[i]-cur>=x){
			cnt++;
			cur=v[i];
		}
	}
	return cnt>=m;
}
int find(){
	int l=1,r=v[n]-v[1];
	while(r-l>1){
		int mid=(l+r)/2;
		if(check(mid))	l=mid;
		else r=mid;
	}
	if(check(r))	return r;
	return l;
}
void solve() {
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>v[i];
		sort(v+1,v+n+1);
		cout<<find()<<endl;
}
int main() {
	solve();
	return 0;
}
