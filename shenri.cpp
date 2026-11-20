#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int N=105;
struct man{
	string name;
	int year,mon,day,id;
}v[N];
bool cmp(man a,man b){
	if(a.year!=b.year)	return a.year<b.year;
	else{
		if(a.mon!=b.mon)	return a.mon<b.mon;
		else{
		if(a.day!=b.day)	return a.day<b.day;
		else	return a.id>b.id;
		}
	}
	
}
void solve() {
int n;
cin>>n;
for(int i=0;i<n;i++){
	cin>>v[i].name>>v[i].year>>v[i].mon>>v[i].day;
	v[i].id=i;

}
sort(v,v+n,cmp);
for(int i=0;i<n;i++){
	cout<<v[i].name<<endl;
}



}
int main() {
	solve();
	return 0;
}
