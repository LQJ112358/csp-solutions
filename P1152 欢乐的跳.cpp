#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9+5;
int a[1005];
bool b[N];
void solve() {
	int n;
	cin>>n;
	for(int i = 0 ;i < n; i++){
		cin>>a[i];
	}
	for(int i = 1;i < n;i++){
		 int m=abs(a[i-1]-a[i]);
		 b[m]=1;
		 cout<<m<<endl;
	}
	bool found = true;
	for(int i = 1; i < n; i++){
		if(!b[i]){
			cout<<"Not jolly";
			found = false;
			break;
		}
	}
		if(found)
			cout<<"Jolly";
}
int main() {
	solve();
	return 0;
}
