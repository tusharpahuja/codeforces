#include<iostream>
#include<vector>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;

int main(){
long long n,i,t,s,sum=0,p,yo;
cin>>n;
if(n<=9){
    cout<<n;
    exit(0);
}
if(n<=99){
    t = n-9;
    t = 2*t;
    cout<<(t+9);
    exit(0);
}
p=9;
s=99;
yo=2;
sum=9;
while(s<=n){
    t = s-p;
    sum += t*yo;
    yo++;
    s = 10*s+9;
    p = 10*p + 9;
}
sum += (n-p)*yo;
cout<<sum;
return 0;
}
