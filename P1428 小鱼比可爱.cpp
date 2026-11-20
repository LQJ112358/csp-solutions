#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[105];
int num;
void solve() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=i;j++){
			if(a[j]<a[i])	num++;
		}
		cout<<num<<" ";
		num=0;
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
