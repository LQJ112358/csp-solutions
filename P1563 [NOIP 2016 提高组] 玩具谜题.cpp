#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
struct man {
	bool n;//n=0,chao nei 
	string name;
}v[N];
int num,a;
int cur=1;
void check(int &cur){
	if(cur<1)
		cur=num+cur;
	if(cur>num)
		cur=cur-num;
}
void found(int n1,int n2){
	if((v[cur].n==0&&n1==0)||(v[cur].n==1&&n1==1)){
		cur=cur-n2;
		check(cur);
	}
	else if((v[cur].n==1&&n1==0)||(v[cur].n==0&&n1==1)){
		cur+=n2;
		check(cur);
	}

}
void solve() {
	cin>>num>>a;
	for(int i=1;i<=num;i++){
		cin>>v[i].n>>v[i].name;
	}
	for(int i=1;i<=a;i++){
		int n1,n2;
		cin>>n1>>n2;//n1=0，chao zuo
		found(n1,n2);
	}
	cout<<v[cur].name;
}
int main() {
	solve();
	return 0;
}
