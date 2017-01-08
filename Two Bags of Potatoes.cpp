#include<iostream>
#include<vector>
#include<string.h>
#include<math.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
long long y,k,n,i,t,s;
cin>>y>>k>>n;
t = n-y;
s = y%k;
if(s==0){
    s = y+k;
}
else{
    s = y + (k-s);
}
if(s>n){
    cout<<-1;
    exit(0);
}
while(s<=n){
    cout<<s-y<<" ";
    s += k;
}
return 0;
}
