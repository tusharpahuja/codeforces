#include<bits/stdc++.h>

using namespace std;

int main(){
long long n,i,m,k,init,lef,wo,hm,le,ri,sl,sr,lp,rp,pre;
cin>>n>>m>>k;
le = k;
ri = k;
m = m-n;
wo = 1;
pre=1;
while(m>=pre){
    m -= pre;
    wo++;
    if(le>1){
        le--;
        pre++;
    }
    if(ri<n){
        ri++;
        pre++;
    }
	if(pre==n){
		break;	
	}
}
cout<<wo + m/n;
return 0;
}
