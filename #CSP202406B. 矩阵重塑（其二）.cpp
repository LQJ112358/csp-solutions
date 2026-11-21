#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,t;
int z[10005];
int a[10005][10005];
int q,w;
void print(){
	for(int i=0;i<q;i++){
		for(int j=0; j<w;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void trans(int x,int y){
	int cnt=0;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			a[i][j]=z[cnt++];
		}
	}
//	print();
}
void trans2(int x,int y){
	int cnt =0;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			a[j][i]=z[cnt++];
		}
	}
	 cnt =0;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			z[cnt++]=a[i][j];
		}
	}
//	print();

}
void solve() {
	cin>>n>>m>>t;
	q=n;
	w=m;
	int cnt =0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			z[cnt++]=a[i][j];
		}
	}
	for(int i=1;i<=t;i++){
		int N;
		cin>>N;
		if(N==1){
			cin>>q>>w;
			trans(q,w);
		}
		else if(N==3){
			int f,l;
			cin>>f>>l;
			cout<<a[f][l]<<"\n";
		}
			
		else{
			int f;
			cin>>f>>f;
			swap(q,w);
			trans2(q,w);
		}
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
