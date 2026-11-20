#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a,b,awin,bwin;
struct turn{
	int t;
	int nxt;	
}al[205],bl[205];
int acur=1,bcur=1;
bool cmp(){
	if(al[acur].t==0&&bl[bcur].t==2)	return true;
	else if(al[acur].t==0&&bl[bcur].t==3)	return true;
	else if(al[acur].t==1&&bl[bcur].t==0)	return true;
	else if(al[acur].t==1&&bl[bcur].t==3)	return true;
	else if(al[acur].t==2&&bl[bcur].t==1)	return true;
	else if(al[acur].t==2&&bl[bcur].t==4)	return true;
	else if(al[acur].t==3&&bl[bcur].t==2)	return true;
	else if(al[acur].t==3&&bl[bcur].t==4)	return true;
	else if(al[acur].t==4&&bl[bcur].t==0)	return true;
	else if(al[acur].t==4&&bl[bcur].t==1)	return true;
	else return false;
	
}
void check(){
	for(int i=1;i<=n;i++){
		if(cmp())	awin++;
		else if(!(al[acur].t==bl[bcur].t))	bwin++;
		acur=al[acur].nxt;
		bcur=bl[bcur].nxt;
	}
}
void solve() {
	cin>>n>>a>>b;
	
	for(int i=1;i<=a;i++){
		cin>>al[i].t;
		al[i].nxt=i+1;
	}
	for(int i=1;i<=b;i++){
		cin>>bl[i].t;
		bl[i].nxt=i+1;
	}
	al[a].nxt=1;
	bl[b].nxt=1;
		check();
	cout<<awin<<" "<<bwin;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
