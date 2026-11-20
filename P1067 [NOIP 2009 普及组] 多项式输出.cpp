#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int a[105];
void print(){
	bool first=true;
	for(int i=0;i<=n;i++){
		if(a[i]==0)	continue;
		else if(a[i]>0&&!first)	cout<<"+";

		if(a[i]==1&&i!=n)	cout<<"";
		else if(a[i]==-1&&i!=n)	cout<<"-";
		else cout<<a[i];
		
		if(i==n)	cout<<"";
		else if(i==n-1)	cout<<"x";
		else cout<<"x^"<<n-i;
		first=false;
	}
}
void solve() {
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i];
	}
	print();
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
