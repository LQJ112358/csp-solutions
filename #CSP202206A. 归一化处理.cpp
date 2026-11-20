#include<bits/stdc++.h>
using namespace std;
#define ll long long
double n;
double a[1005];
double a1;
void solve() {
	cin>>n;
	double sum=0;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		sum+=a[i];
	}
	a1=sum/n;
	double D=0;
	for(int i=1; i<=n; i++) {
		D+=(a[i]-a1)*(a[i]-a1)/n;
	}
	for(int i=1;i<=n;i++){
		double x=sqrt(D);
		cout<<fixed<<setprecision(8)<<(a[i]-a1)/x<<endl;
	}
	
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	solve();
	return 0;
	}
