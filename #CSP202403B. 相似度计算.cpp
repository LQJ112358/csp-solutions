#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,same,sum;
map<string ,int>mp1,mp2;

string trans(string x){
	for(int i=0;i<x.size();i++){
		if(x[i]<='Z')	x[i]=x[i]-'A'+'a';
	}
	return x;
}
void solve() {
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		string temp;
		cin>>temp;
		temp=trans(temp);
		if(mp1[temp]!=1)	sum++;
		mp1[temp]=1;
	}
	for(int i=1;i<=m;i++){
		string temp2;
		cin>>temp2;
		temp2=trans(temp2);
		if(mp2[temp2]!=1&&mp1.find(temp2)!=mp1.end())	same++;
		if(mp1[temp2]!=1&&mp2[temp2]!=1)	sum++;
		mp2[temp2]=1;
	}
	cout<<same<<'\n'<<sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
