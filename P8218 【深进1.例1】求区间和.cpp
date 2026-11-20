#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
int a[N];
int s[N];
int ans[N];
void solve() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	int m;
	cin>>m;
	for(int i=1;i<=m;i++){
		int fst,lst;
		cin>>fst>>lst;
		ans[i]=s[lst]-s[fst-1];
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
