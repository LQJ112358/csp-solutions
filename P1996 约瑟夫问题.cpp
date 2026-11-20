#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,num;
queue<int>mp;
void solve() {
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		mp.push(i);
	while(!mp.empty()){
		int temp=mp.front();
		mp.pop();
		num++;
		if(num==m){
			cout<<temp<<" ";
			num=0;
		}
		else 
			mp.push(temp);
	}
	
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
