#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
long long n1,a=1,i;
long long rem;
cin>>n1;
if((n1>1000000000)||(n1<0)){
    exit(0);
}
if(n1==0){
    cout<<1;
    exit(0);
}
if(n1%4==1){
    cout<<8;
}
else if(n1%4==2){
    cout<<4;
}
else if(n1%4==3){
    cout<<2;
}
else if(n1%4==0){
    cout<<6;
}

return 0;
}




