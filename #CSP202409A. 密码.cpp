#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
string s;
int len;
void check(string s){
	bool A=0,B=0,C=0;
	int h=0,maxx=0;
	for(int i=1;i<=len;i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))	A=1;
		else if(s[i]<='9'&&s[i]>='0')	B=1;
		else if(s[i]=='*'||s[i]=='#')	C=1;	
		for(int j=1;j<=i;j++){
			if(s[i]==s[j])	h++;
			maxx=max(maxx,h);
		}
		h=0;
		
	}
	if(A&&B&&C&&maxx<=2)	cout<<"2"<<'\n';
	else if(A&&B&&C)	cout<<"1"<<'\n';
	else 	cout<<"0"<<'\n';
	
}
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		len=s.size();
		s=" "+s;
		check(s);
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
