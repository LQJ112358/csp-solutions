#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void solve() {
	cin>>n;
	double sum=0;
	if(n>400){
		sum=150*0.4463+250*0.4663+(n-400)*0.5663;
	}
	else if(n>150)
		sum=150*0.44463+(n-150)*0.4663;
	else sum=n*0.4463;
	cout<<fixed<<setprecision(1)<<sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
