#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
struct mp{
	int x;
	int y;
}a[1005];
int v[5];
bool check2(int x,int y){
	for(int i=1;i<=n;i++){
		if(x==a[i].x&&y==a[i].y)	return true;
	}
	return false;
}
void check(int i){
	if(check2(a[i].x+1,a[i].y)&&check2(a[i].x-1,a[i].y)&&check2(a[i].x,a[i].y+1)&&check2(a[i].x,a[i].y-1)){
	}
	else return;
	int num=0;
	if(check2(a[i].x+1,a[i].y+1))	num++;
	if(check2(a[i].x+1,a[i].y-1))	num++;
	if(check2(a[i].x-1,a[i].y+1))	num++;
	if(check2(a[i].x-1,a[i].y-1))	num++;
	v[num]++;
}
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>a[i].x>>a[i].y;
	}
	for(int i=1;i<=n;i++){
		check(i);
	}
	for(int i=0;i<5;i++){
		cout<<v[i]<<"\n";
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
