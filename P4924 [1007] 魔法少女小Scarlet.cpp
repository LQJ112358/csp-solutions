#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int v1[505][505];
int v2[505][505];
int shu=0;
void transform(int a,int b,int c,int e) {
	for(int i=a-c; i<=a+c; i++) {
		for(int j=b-c; j<=b+c; j++) {
			if(e==0) {
				v2[i][j]=v1[a+b-j][b+i-a];
			}
			if(e==1) {
				v2[i][j]=v1[a+j-b][a+b-i];
			}
		}
	}
	for(int i=a-c; i<=a+c; i++) {
		for(int j=b-c; j<=b+c; j++) {
			v1[i][j]=v2[i][j];
		}
	}


}
void solve() {
	cin>>n>>m;
	int num=1;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			v1[i][j]=num;
			num++;
		}
	}
	//ceshi
//				for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(shu==n){
//				cout<<endl;
//				shu=0;
//			}
//			cout<<v1[i][j]<<" ";
//			shu++;
//
//
//	}
//	}

	for(int i=1; i<=m; i++) {
		int x,y,r,z;
		cin>>x>>y>>r>>z;
		transform(x,y,r,z);

//
//		for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(shu==n){
//				cout<<endl;
//				shu=0;
//			}
//			cout<<v1[i][j]<<" ";
//			shu++;
//		}
//	}
//


	}

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(shu==n) {
				cout<<endl;
				shu=0;
			}
			cout<<v1[i][j]<<" ";
			shu++;
		}
	}


}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	solve();
	return 0;
}
