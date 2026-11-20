#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int find(){
	int sum=0;
	int a=n,b=m;
	int turn=min(n,m);
	for(int i=1;i<=turn;i++){
		sum+=b*a;
		b-=1;
		a-=1;
	}
	return sum;
}
int find2(){
	int sum=0;
	sum=(n*(n+1)/2)*m*(m+1)/2-find();
	return sum;
}
void solve() {
	cin>>n>>m;
	cout<<find()<<" "<<find2()<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
