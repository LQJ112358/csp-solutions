#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int a;
int d[33],num,sum;
void trans(int x){
	for(int i=1;i<=33;i++)	d[i]=0;
	num=1;
	if(x==0)	return;
	while(x){
		d[num++]=x%2;
		x/=2;
	}
	
}
void check(){
	bool begin =0;
	int num1=0,num0=0;
			for(int i=32;i>=1;i--){
				if(d[i]==1){
					num1++;
					begin=true;
				}
				else if(begin&&d[i]==0)	num0++;
			}
			if(num1==num0)	sum++;
}
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		trans(a);
		check();
	}
	cout<<sum<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
