#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct word{
	int num;
	int cnt;
}a[105];
int n,m;
bool ok[105];
void solve() {
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int lenth;
		cin>>lenth;
		for(int q=1;q<=m;q++)	ok[q]=false;
		for(int j=1;j<=lenth;j++){
			int v;
			cin>>v;
			if(!ok[v])	a[v].cnt++;
			ok[v]=true;
			a[v].num++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<a[i].cnt<<" "<<a[i].num<<endl;
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
