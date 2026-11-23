#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
int n,m;
int a[N];
vector<vector<int>>s,t;
void check(int x){
	int sum=0;
	for(int i=1;i<=s[x].size()-1;i++){
		sum=sum^a[s[x][i]];
	}
	int num=0;
	for(int i=1;i<=t[x].size()-1;i++){
		num=num^a[t[x][i]];
	}
	if(s[x]==t[x])	cout<<"correct"<<'\n';
	else if(s[x]!=t[x]&&num!=sum)	cout<<"correct"<<'\n';
	else cout<<"wrong"<<'\n';
}
void solve() {
     cin>>n>>m;
     for(int i=1;i<=n;i++){
     	cin>>a[i];
	 }
	 s.resize(m+1);
	 t.resize(m+1);
	 for(int i=1;i<=m;i++){
	 	int k;
	 	cin>>k;
	 	s[i].resize(k+1); 
	 	for(int j=1;j<=k;j++){
	 		cin>>s[i][j];
		 }
	 }
	 for(int i=1;i<=m;i++){
	 	int k;
	 	cin>>k;
	 	t[i].resize(k+1); 
	 	for(int j=1;j<=k;j++){
	 		cin>>t[i][j];
		 }
	 }
	 for(int i=1;i<=m;i++)
	 	check(i);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
