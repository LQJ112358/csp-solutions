#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,M,D;
cin>>n>>k>>M>>D;
if(D==1)
cout<<M;
else{
if(n/(k*(D-1)+1)<M)
cout<<n/(k*(D-1)+1)*2;	

	
}

return 0;
}
