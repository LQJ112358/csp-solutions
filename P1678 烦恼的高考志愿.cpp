#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
int n,m;
int a[N];
int b[N];
ll sum;
int check(int x){
	int fst=1 , lst = n;
	while(lst-fst>1){
		int mid=(fst+lst)/2;
		if(a[mid]==x)	return 0;
		if(a[mid]<x)	fst=mid;
		if(a[mid]>x)	lst=mid;
	}
//	cout<<fst<<endl;
//	cout<<lst<<endl;
	int temp1=abs(x-a[fst]);
	int temp2=abs(a[lst]-x);
//	cout<<min(temp1,temp2)<<endl;
	return min(temp1,temp2);
}
void solve() {
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=m;i++){
		cin>>b[i];	
	}
	sort(b+1,b+m+1);
	for(int i=1;i<=m;i++){
		sum+=check(b[i]);
	}
	cout<<sum;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
