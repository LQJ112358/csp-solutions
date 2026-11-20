#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e6+5;
bool v[N];
vector<char>a;
bool check(char l) {
	if(l==')')    return a.back()=='(';
	else if(l==']')    return a.back()=='[';
	return a.back()=='{';
}
void solve() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		string k;
		 v[i]=true;
		cin>>k;
		int len=k.size();
		k=" "+k;
		for(int j=1; j<=len; j++) {
			if(k[j]=='('||k[j]=='['||k[j]=='{') {
				a.push_back(k[j]);
			} else {
				if(!a.empty()&&check(k[j]))    a.pop_back();
				else v[i]=0;
			}
		}
			if(!a.empty())	v[i]=0;
		vector<char>().swap(a);

	}
	for(int i=1; i<=n; i++) {
		if(v[i])    cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}
int main() {
	solve();
	return 0;
}