#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	int n,m,num=0;
	cin>>n>>m;
	for(int i = n;i<=m;i++){
		string s=to_string(i);
		for(char x:s){
			if(x=='2')
				num++;
		}
	}
	cout<<num;
}
int main() {
	solve();
	return 0;
}
