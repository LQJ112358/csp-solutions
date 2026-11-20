#include<bits/stdc++.h>
using namespace std;
int mp2[101][101];
void solve() {
	int n,m;
	cin>>n>>m;
	char mp[n][m];
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++)
			cin>>mp[x][y];
	}
	int dx[]={-1,0,1,-1,1,-1,0,1};
	int dy[]={1,1,1,0,0,-1,-1,-1};
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++){
		
			if(mp[x][y]=='*'){
			
				cout<<mp[x][y];
				if(y==m-1)	cout << endl;
				continue;
		    }
			if(mp[x][y]=='?'){
				for(int i=0;i<8;i++){
					
					if(x+dx[i]<0||y+dy[i]<0||x+dx[i]>n-1||y+dy[i]>m-1)
						continue;
					if(mp[x+dx[i]][y+dy[i]]=='*')
						mp2[x][y]++;
				}
			}
			cout<<mp2[x][y];
			if(y==m-1)	cout << endl;
		}
	}
	
}
int main(){
	solve();
	return 0;
}
