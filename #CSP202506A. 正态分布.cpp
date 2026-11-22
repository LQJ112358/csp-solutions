#include<bits/stdc++.h>
using namespace std;
#define ll long long
double eps=1e-9;
int k;
double a,b,c;
void check(double x){
	int hang=floor(x*10+eps);
	int lie=(x*10-hang+eps)*10;
	cout<<hang+1<<" "<<lie+1<<"\n";
}
void solve() {
	cin>>k;
	for(int i=1;i<=k;i++){
		cin>>a>>b>>c;
		double s=(c-a)/b;
		check(s);
	}
	
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
