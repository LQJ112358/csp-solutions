#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
double a[105];
void print (){
	for(int i=1;i<=n;i++){
		cout<<round(a[i])<<" ";
	}
	cout<<"\n";
}
void print2(){
	for(int i=1;i<=n;i++){
		int v=a[i]*10;
		int b=v%10;
		int temp=v/10;
		if(b!=5)	cout<<round(a[i])<<" ";
		else{
			if(temp%2==0)	cout<<temp<<" ";
			else cout<<temp+1<<" ";
		}
	}
}
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	print();
	print2();
}	
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
