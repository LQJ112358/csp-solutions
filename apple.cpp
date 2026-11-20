#include<bits/stdc++.h>
using namespace std;

void solve() {
    int money=0,left=0,cun=0;
    for(int i=0;i<12;i++){
        cin>>money;
        int total=left+300-money; 
        if(total<0) {
            cout<<"-"<<i+1<< endl;
            break;
        }
        cun+=total/100*100;
        left=total-total/100*100;   
		if(i==11)
		    cout<<cun*6/5+left<<endl;    
		 } 


}
int main() {
    solve();
    return 0;
}