#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct line{
	int nxt;
	int lst;
}a[105];
void solve() {
	int n,m,num;
	cin>>n>>m;
	num=n;
	a[1].lst=n;
	a[1].nxt=2;
	a[n].nxt=1;
	a[n].lst=n-1;
	for(int i=2;i<n;i++){
		a[i].nxt=i+1;
		a[i].lst=i-1;
	}
	int turn=0,cur=1;
	while(num){
		turn++;
		if(turn == m){
			num--;
			a[a[cur].lst].nxt=a[cur].nxt;
			a[a[cur].nxt].lst=a[cur].lst;
			turn=0;
			cout<<cur<<" ";
		}
		cur=a[cur].nxt;
		
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
