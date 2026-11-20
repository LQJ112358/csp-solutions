#include<bits/stdc++.h>
using namespace std;
#define ll long long
int v[2000005];
void solve() {
	double a;
	int n,k,m;
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>a>>k;
		for(int j=1;j<=k;j++){
		m = static_cast<int>(j*a);
		if(v[m]==0)	   v[m]=1;
		else	v[m]=0;
	}
	}
	for(int i=1;i<=2000005;i++)
	if(v[i]==1){
		cout<<i;
		break;
	}


}
int main() {
	solve();
	return 0;
}
