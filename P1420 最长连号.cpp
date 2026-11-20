#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	int n;
	cin>>n;
	int a=0,num=0,maxx=0;
	for(int i=1;i<=n;i++){
		cin>>a;
		int temp;
		if(i==1)
			num++;
		if(i!=1&&a==temp+1)
			num++;
		else num=1;
		temp=a;
		maxx=max(maxx,num);
		
	}
	cout<<maxx;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
