#include<bits/stdc++.h>
using namespace std;
#define ll long long
double n,a,sum;
void solve() {
	cin>>n>>a;
	for(int i=1;i<=n;i++){
		double x,y;
		cin>>x>>y;
		if(x*x+y*y<=a*a)	sum++;
	}
	double PI=4*(sum/n);
	cout<<fixed<<setprecision(6)<<PI;
	
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
