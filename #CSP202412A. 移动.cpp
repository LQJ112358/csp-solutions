#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
int x,y;
int a[105][105];
void move(char z){
	if(z=='f'&&y+1<=n)	y++;
	else if(z=='b'&&y-1>=1)	y--;
	else if(z=='l'&&x-1>=1)	x--;
	else if(z=='r'&&x+1<=n)	x++;
	cout<<x<<" "<<y<<endl;
}
void solve() {
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>x>>y;
		string s;
		cin>>s;
		int len=s.size();
		s=" "+s;
		for(int j=1;j<=len;j++){
			move(s[j]);
		}
		cout<<x<<" "<<y<<"\n";
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
