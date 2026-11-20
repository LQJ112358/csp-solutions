#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	ll x1,x2,y1,y2;
	cin>>x1>>x2>>y1>>y2;
	ll a[4]={x1*y1,x1*y2,x2*y1,x2*y2};
	bool find =1;
	for(int i=0;i<4;i++){
		if(a[i]>2147483647||a[i]<-2147483648){
			cout<<"long long int";
			find=0;
			break;
		}
	}
	if(find)	cout<<"int";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
