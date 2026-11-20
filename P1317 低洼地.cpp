#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[10005];
void solve() {
	int n,num=0;
	cin>>n;
	int cnt = 1;
	for (int i = 1; i <= n; i++) {
		cin>>a[i];
		if (cnt == 1 || a[i] != a[cnt - 1])
			a[cnt++] = a[i];
	}
	for(int i=2; i<=cnt-2; i++) {
		if(a[i]<a[i-1]&&a[i]<a[i+1])
			num++;
	}
	cout<<num;

}
int main() {
	solve();
	return 0;
}
