#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct time{
	int fst;
	int lst;
}a[2005],b[2005];
int n,sum;
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].fst>>a[i].lst;
	}
	for(int i=1;i<=n;i++){
		cin>>b[i].fst>>b[i].lst;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i].fst<=b[j].lst&&a[i].lst>=b[j].fst){
				sum+=min(a[i].lst,b[j].lst)-max(a[i].fst,b[j].fst);
			}
		}
	}
	cout<<sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
