#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	double n;
	cin>>n;
	double num=0,sum=0;
	double temp=2;
	while(sum<=n){
		sum+=temp;
		temp=temp*0.98;
//		cout<<sum<<endl;
		num++;
	}
	cout<<num;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
