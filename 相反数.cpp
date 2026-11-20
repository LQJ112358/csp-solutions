#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int v[N];
void solve() {
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(abs(v[i]-v[j])==1)
				sum++;
		}
	}
	cout<<sum;
}
int main() {
	solve();
	return 0;
}
