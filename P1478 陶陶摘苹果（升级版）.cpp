#include<bits/stdc++.h>
using namespace std;
#define ll long long
int v[5005];
void solve() {
	int n,s,a,b,num=0,cnt=0;
	cin>>n>>s>>a>>b;
	for(int i=1; i<=n; i++) {
		int h,y;
		cin>>h>>y;
		if(h<=a+b) {
			v[++num]=y;
		}
	}
	sort(v+1,v+num+1);
	for(int i=1;i<=num;i++){
			s-=v[i];
			if(s>0){
			cout<<s<<" "<<v[i]<<endl;
			cnt++;
		}
	}
	cout<<cnt<<endl;
}
int main() {
	solve();
	return 0;
}
