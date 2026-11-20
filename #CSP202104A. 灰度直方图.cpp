#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,l;
map<int ,int >mp;
int a[250005];
void solve() {
	cin>>n>>m>>l;
	for(int i=1;i<=n*m;i++){
		int a;
		cin>>a;
		mp[a]++;

	}
	for(int i=0;i<l;i++)
		cout<<mp[i]<<" ";
}
int main() {
	solve();
	return 0;
}
