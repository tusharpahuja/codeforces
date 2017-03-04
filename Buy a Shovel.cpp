#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
long long k,k1,r,i,cou=0,t=1,rem;
cin>>k>>r;
k1=k;
rem = k%10;

while((rem!=r)&&(rem!=0)){
    cou++;
    k1 = k*t;
    t++;
    rem = k1%10;
}
if(cou==0){
    cout<<1;
    exit(0);
}
cout<<cou;


return 0;
}
