#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,t;
int v[10005][10005];
int z[10005];
//void print(){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<v[i][j]<<" ";
//		}
//		cout<<"\n";
//	}
//}
void trans(int x,int y){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			v[i][j]=0;
		}
	}
	n=x;
	m=y;
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			v[i][j]=z[cnt++];
		}
	}
//	print();
}
void trans2(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			v[i][j]=0;
		}
	}

	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			v[j][i]=z[cnt++];
		}
	}
	swap(n,m);
//	print();
	cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			z[cnt++]=v[i][j];
		}
	}
}
void solve() {
	cin>>n>>m>>t;
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
			z[cnt++]=v[i][j];
		}
	}
	for(int i=1;i<=t;i++){
		int op,a,b;
		cin>>op>>a>>b;
		if(op==1){
			trans(a,b);
		}
		else if(op==3){
			cout<<v[a][b]<<"\n";
		}
		else {
			trans2();
		}
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
