#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e6+5;
int n,p;
int a[N];
int b[N];
int d[N];
int min;
void solve() {
	cin>>n>>p;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=a[i]-a[i-1];
	}
	for(int i=1;i<=p;i++){
		int fst,lst,num;
		cin>>fst>>lst>>num;
		d[fst]+=num;
		d[lst+1]-=num;
	}
	for(int i=1;i<=n;i++){
		b[i]=b[i-1]+d[i];
	}
	sort(b+1,b+1+n);
	cout<<b[1];
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
