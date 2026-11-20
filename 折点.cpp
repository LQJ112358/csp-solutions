#include<bits/stdc++.h>
using namespace std;
#define ll long long
priority_queue<int , vector<int>,greater<int>>q;

void solve() {
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		q.push(a);
	}
	for(int i=0;i<n-1;i++){
		int b=q.top();
		sum+=b;
		q.pop();
		int v=q.top();
		q.pop();
		sum+=v;
		q.push(v+b);
	}
	cout<<sum;
}
int main() {
	solve();
	return 0;
}
