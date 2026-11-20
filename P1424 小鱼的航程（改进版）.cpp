#include<bits/stdc++.h>
using namespace std;
#define ll long long
int sum;
void solve() {
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		if(n!=6&&n!=7){
			sum+=250;
		}
		n++;
		if(n==8)
			n=1;
	}
	cout<<sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
