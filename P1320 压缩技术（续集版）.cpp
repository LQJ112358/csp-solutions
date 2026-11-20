#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mp[40005];
char turn='0';
void solve() {
	char a;
	int sum=0,num=1;
	while(cin>>a){
		sum++;
		if(a!=turn){
			turn=a;
			num++;
			mp[num]++;
//			cout<<num<<" "<<mp[num]<<endl;
		}
		else {
			mp[num]++;
//			cout<<num<<" "<<mp[num]<<endl;
		}
	}
	double N=sqrt(sum);
	cout<<N<<" ";         
	for(int i=1;i<=num;i++)
		cout<<mp[i]<<" ";
}
int main() {
	solve();
	return 0;
}
