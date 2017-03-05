#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int v1,v2,t,d,i,ans=0;
cin>>v1>>v2>>t>>d;
int a[t+1],b[t+1];
a[1] = v1;
b[t] = v2;
for(i=2;i<=t;i++){
    a[i] = a[i-1]+d;
}
for(i=t;i>=2;i--){
    b[i-1] = b[i]+d;
}
for(i=1;i<=t;i++){
    ans += min(a[i],b[i]);
}
cout<<ans;
return 0;
}






