#include<bits/stdc++.h>
using namespace std;
long long mp[25][25];
int mark[25][25];
void solve() {
	int bx,by,mx,my;
	cin>>bx>>by>>mx>>my;
	int dx[]={2,2,1,1,-1,-1,-2,-2,0};
	int dy[]={1,-1,2,-2,2,-2,1,-1,0};
    for(int i=0;i<9;i++){
  		if(mx+dx[i]<0||my+dy[i]<0)
  			continue;
	  	mark[mx+dx[i]][my+dy[i]]=1;
  	}
	mp[0][0]=1;
	for(int i=0;i<=bx;i++){
		for(int j=0;j<=by;j++){
			if(mark[i][j]==1)
				continue;
			if(i-1>=0&&mark[i-1][j]!=1)
				mp[i][j]+=mp[i-1][j];
			if(j-1>=0&&mark[i][j-1]!=1)
				mp[i][j]+=mp[i][j-1];
			
		}	
	}
	cout<<mp[bx][by];
	
}
int main() {
	solve();
	return 0;
}
