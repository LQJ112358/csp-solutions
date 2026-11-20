#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
int n,m,a[N];
int find(int num) {
    int l=1,r=n;
    while(r-l>1) {
        int mid=(l+r)/2;
        if(num>a[mid])    l=mid+1;
        else    r=mid;
    }
    if(a[l]==num)    return l;
    if(a[r]==num)    return r;
    return -1;
}
void solve() {
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    while(m--) {
        int q;
        cin >> q;
        cout << find(q) << ' ';
    }
}
int main() {
    solve();
    return 0;
}