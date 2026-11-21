#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,k;
string s;
char trans3(char x){
	cout<<endl;
	if(x<'a'&&x>='Z')	return x+'a'-'A';
	else	return x;
	
}
char trans2(char x){
	cout<<endl;
	if(x<='z'&&x>'Z')	return x-'a'+'A';
	else	return x;
	
}
void trans(int i){
	if(s[i-1]>=s[i+1])	cout<<"-";
	else if(n==3){
		for(int j=1;j<=m;j++){
			cout<<"*";
		}
	}
	else {
		int diff=1;
		diff=s[i+1]-s[i-1];
		if(n==2){
			for(int j=1;j<diff;j++){
				for(int v=1;v<=m;v++){
					cout<<trans2(s[i])+1;
				}
				s[i-1]++;
			}
		}
		else {
			for(int j=1;j<diff;j++){
				for(int v=1;v<=m;v++){
					cout<<trans3(s[i])+1;
				}
				s[i-1]++;
			}
		}
	}
}
void solve() {
	cin>>n>>m>>k;
	cin>>s;
	int len=s.size();
	s=' '+s;
	for(int i=1;i<=len;i++){
		if(s[i]=='-')	trans(i);
		else	cout<<s[i];
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
