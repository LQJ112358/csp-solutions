#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,num;
bool v[25];
struct dian {
	int x;
	int y;
	string type;
} a[1005];
bool t[2];
int b[2];
bool check(int x) {
	if(num>0)	num=1;
	
	else num=-1;
	if(!t[x]) {
		t[x]=1;
		b[x]=num;
		return true;
	} 
	else if(b[0]==b[1])	return false;
	else {
		if(num!=b[x])
			return false;
		return true;
	}
}
void solve() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i].x>>a[i].y>>a[i].type;
	}
	for(int i=1; i<=m; i++) {
		int w0,w1,w2;
		cin>>w0>>w1>>w2;
		bool find = true;
		for(int j=1; j<=n; j++) {
			bool result;
			num=w0+w1*a[j].x+w2*a[j].y;
			if(a[j].type=="A")	result=check(0);
			else result=check(1);
			if(!result) {
				find=false;
				break;
			}
		}
		if(find)	v[i]=1;
		t[0]=0;
		t[1]=0;
		b[0]=0;
		b[1]=0;
	}
	for(int i=1; i<=m; i++) {
		if(v[i])	cout<<"Yes"<<endl;
		else  cout<<"No"<<endl;
	}
}
int main() {
	solve();
	return 0;
}
