#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long n,o=0,t=0,th=0,i,a,m=0;
cin>>n;
for(i=0;i<n;i++){
    cin>>a;
    if(a==1){
        o++;
    }
    else if(a==2){
        t++;
    }
    else{
        th++;
    }
}
if(o>m){
    m = o;
}
if(t>m){
    m=t;
}
if(th>m){
    m = th;
}
cout<<n-m;
return 0;
}






