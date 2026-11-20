#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[10][10];
int b[10][10];
int n;
int i=1;
void move(int x,int y){
	b[x][y]=i;
	a[x][y] = 1;
	i++;
	if(y+1<=n&&a[x][y+1]==0)	move(x,y+1);
	if(x+1<=n&&a[x+1][y]==0)	move(x+1,y);
	if(y-1>0&&a[x][y-1]==0)		move(x,y-1);
	if(x-1>0&&a[x-1][y]==0)		move(x-1,y);
}
void solve() {
	cin>>n;
	
	int x,y;
	cin>>x>>y;
	move(x,y);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<setw(5)<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
