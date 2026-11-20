#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int N=305;
struct student{
	int zongfen;
	int yuwen;
	int shuxue;
	int yinyu;
	int id;
	
}st[N];
bool cmp(student a,student b){
	if(a.zongfen!=b.zongfen)	return a.zongfen>b.zongfen;	
	else{
		if(a.yuwen!=b.yuwen)	return a.yuwen>b.yuwen;
		else
			return a.id<b.id;
		
		
	} 
	

}
void solve() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>st[i].yuwen;
		cin>>st[i].shuxue;
		cin>>st[i].yinyu;
		st[i].zongfen=st[i].yuwen+st[i].shuxue+st[i].yinyu;
		st[i].id=i+1;
	}
	for(int i=0;i<n;i++)
		sort(st,st+n,cmp);
	for(int i=0;i<5;i++)
		cout<<st[i].id<<" "<<st[i].zongfen<<endl;;
	

}
int main() {
	solve();
	return 0;
}
