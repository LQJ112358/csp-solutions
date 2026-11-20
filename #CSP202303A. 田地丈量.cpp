#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,x,y,num;
const int N=1e4+5;
int a[N][N];
void find() {
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	for(int i=x1; i<x2; i++) {
		for(int j=y1; j<y2; j++){
			if(i>=0&&i<x&&j<y&&j>=0)	 num++;
		}
	}
}
void solve(){
	cin>>n>>x>>y;
	for(int i=1; i<=n; i++) {
		find();
	}
	cout<<num;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	solve();
	return 0;
}
