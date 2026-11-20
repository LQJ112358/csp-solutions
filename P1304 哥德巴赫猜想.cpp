#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[5005];
	int n;
void mp(){
	a[2]=2;
	for(int i=3;i<5005;i++){
		bool find=true;
		for(int j=2;j<i;j++){
			if(i%j==0){
				find=false;
				break;
			}
		}
		if(find)	a[i]=i;
	}

}
void solve() {
	cin>>n;
	for(int i=4;i<=n;i=i+2){
		for(int j=0;j<=i/2;j++){
			if(a[i-a[j]]!=0){
				cout<<i<<"="<<j<<"+"<<i-j<<endl;
				break;
			}
		}
	}
}
int main() {
	mp();
	solve();
	return 0;
}
