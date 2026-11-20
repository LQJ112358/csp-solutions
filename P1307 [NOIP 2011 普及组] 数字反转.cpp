#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	int n;
	cin>>n;
	int s=abs(n);
	int neww=0;
	while(s!=0){
		int y=s%10;
		s=s/10;
		neww=neww*10+y;
	}
	if(n<0)
		cout<<"-"<<neww;
	else cout<<neww;
}
int main() {
	solve();
	return 0;
}
