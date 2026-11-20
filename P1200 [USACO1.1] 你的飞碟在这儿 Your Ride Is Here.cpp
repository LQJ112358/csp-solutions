#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	string n,m;
	int n1=1,m1=1;
	cin>>n>>m;
	for(char x:n){
		n1*=x-'A'+1;
	}
	for(char x:m){
		m1*=x-'A'+1;
	}
	if(n1%47==m1%47)
		cout<<"GO";
	else
		cout<<"STAY";
}
int main() {
	solve();
	return 0;
}
