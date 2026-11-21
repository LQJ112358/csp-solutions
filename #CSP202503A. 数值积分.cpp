#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll b,c,l,r,sum;
void solve() {
	cin>>b>>c>>l>>r;
	for(int i=(l+1)/2*2;i<=r/2*2;i+=2){
		sum+=2*(i*i+b*i+c);
	}
	cout<<sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
