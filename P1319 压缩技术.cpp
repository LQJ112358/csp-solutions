#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool turn;
void solve() {
	int N;
	cin>>N;
	int num=0;
	int a;
	while(cin>>a) {
		if(!turn) {
			turn=1;
			for(int j=1; j<=a; j++) {
				cout<<"0";
				num++;
				if(num==N){
					cout<<endl;
					num=0;
				}
			}
		} else {
			turn =0;
			for(int j=1; j<=a; j++) {
				cout<<"1";
				num++;
				if(num==N){
					cout<<endl;
					num=0;
				}
			}
		}
	}
}
	int main() {
		solve();
		return 0;
	}
