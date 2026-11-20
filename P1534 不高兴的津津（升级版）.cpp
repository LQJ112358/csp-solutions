#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,sum,total;
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		sum+=a+b-8;
		total+=sum;
	}
	cout<<total;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
