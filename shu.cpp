#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int road[N];
void solve() {
	int l,m;
	cin>>l>>m;
	for(int i=0;i<=l;i++)
		road[i]=1;
	for(int i=0;i<m;i++){
		int be=0,en=0;
		cin>>be>>en;
		for(int j=be;j<=en;j++)
			road[j]=0;
	}
	int sum=0;
	for(int i=0;i<=l;i++)
		sum+=road[i];
	cout<<sum;
	
}
int main() {
	solve();
	return 0;
}
