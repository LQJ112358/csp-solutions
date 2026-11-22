#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
int n,w;
int a[N],b[N];
void ans(int i){
	int temp2=b[i];
	b[i]=0;
	w=a[1];
	int temp=w;
	for(int j=1;j<=n;j++){
	 temp+=a[j+1]-b[j];
		w=max(w,temp);
//		cout<<w<<"\n";
	}
	cout<<w<<" ";
	b[i]=temp2;
}
void solve() {
	cin>>n;
	for(int i=1;i<=n+1;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		ans(i);
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
