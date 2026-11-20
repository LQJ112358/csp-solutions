#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[5];
void solve() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s=to_string(i);
		int q=s.size();
		for(int j=0;j<q;j++){
			if(i%7==0||s[j]=='7'){
				a[(i-1)%4]++;
				n++;
				break;
			}
		}
	}
	
	for(int i=0;i<4;i++){
		cout<<a[i]<<endl;
	}
}
int main() {
	solve();
	return 0;
}
