#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k,M,D;
int maxx;
bool check(int x){
	if(n/x>k*D)	return false;
}
int sum(int x){
	int total=0;
	int turn=(n/x-1)/k+1;
	total+=x*turn;
	return total;
}
void solve() {
	cin>>n>>k>>M>>D;
	for(int i=M;i>=1;i--){
		if(check(i)){
			maxx=max(maxx,sum(i));
		}
	}
	cout<<maxx;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
