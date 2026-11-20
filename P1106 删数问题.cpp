#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
	string n;
	int k,turn=0;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		bool found=0;
		for(int j=0;j<n.size()-1;j++){
			if(n[j]>n[j+1]){
				n.erase(j,1);
				found=1;
				break;
			}
		}
	if(!found)	break;
	
	turn++;
	}
	if(turn<k){
		for(int i=0;i<k-turn;i++)
			n.pop_back();
	}
	while(n[0]=='0') n.erase(0,1);
	if(n.empty())	cout<<"0";
	cout<<n;
}
int main() {
	solve();
	return 0;
}
