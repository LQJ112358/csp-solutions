#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[105];
int i=1;
void solve() {
	while(true){
		cin>>a[i];
		if(a[i]==0)
			break;
		i++;
	}
	for(;i>=2;i--){
		cout<<a[i-1]<<" ";
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
