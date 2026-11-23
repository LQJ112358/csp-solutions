#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,l,r,t,num;
int a[605][605];
int d[605][605];
bool check(int x,int y){
	int up=y-r,down=y+r,left=x+r,right=x-r;
	if(x+r>n)	left=n;
	if(x-r<1)	right=1;	
	if(y+r>n)	down=n;
	if(y-r<1)	up=1;
	int  total=(left-right+1)*(down-up+1);
	int sum=d[left][down]-d[left][up-1]-d[right-1][down]+d[right-1][up-1];
	double pin=1.0*sum/total;
//			cout<<x<<' '<<y<<' '<<total<<' '<< sum<<' '<<pin<<'\n';
	if(pin<=t){
		return true;
	}
	return false;
}
void solve() {
	cin>>n>>l>>r>>t;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			d[i][j]=d[i-1][j]+d[i][j-1]-d[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(check(i,j))	num++;
		}
	}
	cout<<num;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
