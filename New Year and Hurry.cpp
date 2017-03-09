#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<map>
using namespace std;

int main(){
int n,k,i,t,r,nu=0;
cin>>n>>k;
t = 240;
r = t - k;
if(r<=0){
    cout<<0;
    exit(0);
}
for(i=1;i<=n;i++){
    if(5*i<=r){
        nu++;
        r = r - 5*i;
    }
    else{
        break;
    }
}
cout<<nu;
return 0;
}






