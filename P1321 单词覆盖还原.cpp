#include<bits/stdc++.h>
using namespace std;
#define ll long long
string n;
int num1,num2;
bool ban[255];
void check(int i,int &num1,int &num2){
	ban[i]=1;
	if(n[i]=='b'||n[i]=='o'||n[i]=='y')
		num1++;
	if(n[i]=='g'||n[i]=='i'||n[i]=='r'||n[i]=='l')
		num2++;
	if(n[i]=='b'){
		if(n[i+1]=='o')
			ban[i+1]=1;
		if(n[i+2]=='y')
			ban[i+2]=1;
	}
	else if(n[i]=='o'){
		if(n[i+1]=='y')	ban[i+1]=1;
	}
	else if(n[i]=='g'){
		if(n[i+1]=='i')	ban[i+1]=1;
		if(n[i+2]=='r')	ban[i+2]=1;
		if(n[i+3]=='l')	ban[i+3]=1;
	}
	else if(n[i]=='i'){
		if(n[i+1]=='r')	ban[i+1]=1;
		if(n[i+2]=='l')	ban[i+2]=1;
	}
	else if(n[i]=='r')
		if(n[i+1]=='l')	ban[i+1]=1;
}
void ans(int &num1,int &num2){
	for(int i=0;i<n.size();i++){
		if(ban[i]||n[i]=='.')	continue;
		else	check(i,num1,num2);
		
	
	}
}
void solve() {
	cin>>n;
	ans(num1,num2);
	cout<<num1<<endl<<num2<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
