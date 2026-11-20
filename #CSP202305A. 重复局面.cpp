#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a[805];
int num=0;
void solve() {
	int n;
	cin>>n;
	for(int i=1;i<=8*n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(a[1+8*i]==a[j*8+1]&&a[2+8*i]==a[j*8+2]&&a[3+8*i]==a[j*8+3]&&a[4+8*i]==a[j*8+4]&&a[5+8*i]==a[j*8+5]&&a[6+8*i]==a[j*8+6]&&a[7+8*i]==a[j*8+7]&&a[8*(i+1)]==a[(j+1)*8]){
				num++;
			}
		}
		cout<<num<<endl;
		num=0;
	}
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
