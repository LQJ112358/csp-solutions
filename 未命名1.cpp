#include<bits/stdc++.h>
using namespace std;
void solve() {
	int r,g,y,n;
	cin>>r>>g>>y>>n;
	int sum=0;
	for(int i=0;i<n;i++){
		int k,t;
		cin>>k>>t;
		if(k==0||k==1)
			sum+=t;
		else if(k==2)
			sum+=t+r;
		
	}
	cout<<sum<<endl;
}
int main() {
	
	solve();
	return 0;
}
