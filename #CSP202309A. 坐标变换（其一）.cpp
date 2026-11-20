#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
struct point{
	int dx;
	int dy;
}a[105];
int xl[105],yl[105],i;
void move(int x,int y){
	i++;
	for(int i=1;i<=n;i++){
		x+=a[i].dx;
		y+=a[i].dy;
	}
	xl[i]=x;
	yl[i]=y;
}
void solve() {
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].dx>>a[i].dy;
	}
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		move(x,y);
	}
	for(int i=1;i<=m;i++){
		cout<<xl[i]<<" "<<yl[i]<<endl;
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
