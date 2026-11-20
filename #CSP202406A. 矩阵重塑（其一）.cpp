#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,q,p;
int a[10005];
void solve() {
	cin>>n>>m>>q>>p;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i*m+j];
		}
	}
	for(int i=0;i<q;i++){
		for(int j=0;j<p;j++){
			cout<<a[i*p+j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
