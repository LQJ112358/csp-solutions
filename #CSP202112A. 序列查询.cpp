#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e7+5;
int n,N;
int a[M];
int sum;
int find(int x){
	if(x==0)
	return 0;
	else if(x!=n) {
		return (a[x+1]-a[x])*x;
	}
	else {
		return (N-a[n])*x;
	}
}
void solve() {
	cin>>n>>N;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n;i++){
		sum+=find(i);
	}
	cout<<sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0); 
    solve();
    return 0;
}