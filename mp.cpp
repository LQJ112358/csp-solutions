#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int N=1e4+5;
int v[N];
map<int,int>mp;
void solve() {
	int n;
	cin>>n;
	int maxx=0,ans=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		mp[v[i]]++;
	}
	for(auto &p:mp){
		int k=p.first;
		int a=p.second;
		if(maxx<a){
			maxx=a;
			ans=k;
		}
		else if(maxx==a){
			if(ans>k)
				ans=k;
			}
	}
	
	cout<<ans;
	
	
}
int main() {
	solve();
	return 0;
}
