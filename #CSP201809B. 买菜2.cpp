#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct time{
	int fst;
	int lst;
}a[2005],b[2005];
int n,sum;
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].fst>>a[i].lst;
	}
	for(int i=1;i<=n;i++){
		cin>>b[i].fst>>b[i].lst;
	}
	int x=1,y=1;
	while(x<=n&&y<=n){
		int maxx=max(a[x].fst,b[y].fst);
		int minn=min(a[x].lst,b[y].lst);
		if(minn-maxx>=0)	sum+=minn-maxx;
		if(a[x].lst<b[y].lst)	x++;
		else if(a[x].lst>b[y].lst)	y++;
		else {
			x++;
			y++;
		}
	}
	cout<<sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
