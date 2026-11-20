#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> a;
void solve() {
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int b;
		cin>>b;
		a.push_back(b);
	}
	for(int i=1;i<=m;i++){
		int temp;
		cin>>temp;
		cout<<a[temp-1]<<endl;
	}
}
int main() {
	solve();
	return 0;
}
