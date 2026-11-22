#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+5;
struct line{
	ll index;
	ll value;
}v[N],m[N];
ll n,a,b,sum;
void solve() {
	cin>>n>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>v[i].index>>v[i].value;
	}
	for(int i=1;i<=b;i++){
		cin>>m[i].index>>m[i].value;
	}
	int x=1,y=1;
	while(x<=a&&y<=b){
		if(v[x].index==m[y].index){
//			cout<<"AAAA"<<"\n";
			sum+=v[x].value*m[y].value;
//			cout<<sum<<"\n";
			x++;
			y++;
		}
		else if(v[x].index<m[y].index)	x++;
		else y++;
	}
	cout<<sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
