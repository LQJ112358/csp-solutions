#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=125;
int a[N][N];
int s[N][N];
int maxx;
void solve() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int x=1;x<=i;x++){
				for(int y=1;y<=j;y++){
					maxx=max(maxx,s[i][j]-s[x-1][j]-s[i][y-1]+s[x-1][y-1]);
				}
			}
		}
	}
	cout<<maxx;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
