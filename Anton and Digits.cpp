#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<map>
using namespace std;

int main(){
long long k2,k3,k5,k6,i,mini1,mini2,sum=0;
cin>>k2>>k3>>k5>>k6;
if(k2>k6){
    mini1 = k6;
}
else{
    mini1 = k2;
}
if(k5<mini1){
    mini1 = k5;
}
sum += mini1*256;
k2 = k2-mini1;
if(k2>k3){
    mini2 = k3;
}
else{
    mini2 = k2;
}
sum += mini2*32;
cout<<sum;
return 0;
}
