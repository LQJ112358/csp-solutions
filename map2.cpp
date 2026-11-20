#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
map<string,int>mp;
string v[N];
void solve() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>v[i];	
		mp[v[i]]++;
		cout<<mp[v[i]]<<" ";
	
}

}
int main() {
	solve();
	return 0;
}
