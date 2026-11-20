#include<bits/stdc++.h>
using namespace std;
#define ll long long
string mp[15];
int xl,yl,xr,yr,dirl,dirr,tim;
void move() {
	tim++;
	if(dirl==0) {
		if(mp[yl-1][xl]=='.') {
			yl-=1;
		} else if(mp[yl-1][xl]=='*') {
			dirl=1;
		}
	} else if(dirl==1) {
		if(mp[yl][xl+1]=='.') {
			xl+=1;
		} else if(mp[yl][xl+1]=='*') {
			dirl=2;
		}
	} else if(dirl==2) {
		if(mp[yl+1][xl]=='.') {
			yl+=1;
		} else if(mp[yl+1][xl]=='*') {
			dirl=3;
		}
	} else if(dirl==3) {
		if(mp[yl][xl-1]=='.') {
			xl-=1;
		} else if(mp[yl][xl-1]=='*') {
			dirl=0;
		}
	}
	if(dirr==0) {
		if(mp[yr-1][xr]=='.') {
			yr-=1;
		} else if(mp[yr-1][xr]=='*') {
			dirr=1;
		}
	} else if(dirr==1) {
		if(mp[yr][xr+1]=='.') {
			xr+=1;
		} else if(mp[yr][xr+1]=='*') {
			dirr=2;
		}
	} else if(dirr==2) {
		if(mp[yr+1][xr]=='.') {
			yr+=1;
		} else if(mp[yr+1][xr]=='*') {
			dirr=3;
		}
	} else if(dirr==3) {
		if(mp[yr][xr-1]=='.') {
			xr-=1;
		} else if(mp[yr][xr-1]=='*') {
			dirr=0;
		}
	}
}
void solve() {
	for(int i = 0; i < 15; i++) mp[i] = string(15, '*');
	bool ok =true;
	for(int i = 1; i <= 10; i++) {
		string s;
		cin >> s;
		for(int j = 1; j <= 10; j++) {
			mp[i][j] = s[j-1];
			if(mp[i][j] == 'F') {
				xl = j;
				yl = i;
				mp[i][j] = '.';
			} else if(mp[i][j] == 'C') {
				xr = j;
				yr = i;
				mp[i][j] = '.';
			}
		}
	}
	for(int i=1; i<=160000; i++) {
		move();
		if(xl==xr&&yl==yr) {
			cout<<tim;
			ok=false;
			break;
		}
	}
	if(ok) {
		cout<<"0";
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	solve();
	return 0;
}
