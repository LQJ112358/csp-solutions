#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	double s,x;
	cin>>s>>x;
	double temp=7,sum=0,sum_nxt=0;
	while(1){
		sum+=temp;
		temp*=0.98;
		sum_nxt=sum+temp;
		if(s<=x){
			if(s+x>=7){
				cout<<"y";
				break;
			}
		}
		if(sum>s-x){
			if(sum_nxt>s+x){
				cout<<"n";
				break;
			}
			
			else {
			cout<<"y";
			break;
			}
		}
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
