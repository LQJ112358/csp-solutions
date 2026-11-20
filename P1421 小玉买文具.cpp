#include<bits/stdc++.h>
using namespace std;
#define ll long long
int sum;
void solve() {
	int n,m;
	cin>>n>>m;
	sum=n*10+m;
	cout<<sum/19;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
