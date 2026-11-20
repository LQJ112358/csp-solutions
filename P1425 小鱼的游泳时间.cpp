#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int fst=a*60+b;
	int lst=c*60+d;
	int sum=lst-fst;
	cout<<sum/60<<" "<<sum%60;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
