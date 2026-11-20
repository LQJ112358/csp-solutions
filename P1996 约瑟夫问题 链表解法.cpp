#include<bits/stdc++.h>
using namespace std;
#define ll long long
int nxt[105]; 
int turn;
void solve() {
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		nxt[i]=i+1;
	}
	int num=n,cur=1;
	nxt[n]=1;
	while(num){
		turn++;
		if(turn == m-1){
			turn =0;
			cout<<nxt[cur]<<" ";
			nxt[cur]=nxt[nxt[cur]];
			num--;
		}
		cur=nxt[cur];

	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
