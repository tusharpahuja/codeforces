#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
long long n,m,a,r,r1,r2;
cin>>n>>m>>a;
if((n<=a)&&(m<=a)){
    cout<<1;
}
else if((n<=a)&&(m>a)){
    if(m%a!=0){
        r=m/a+1;
    }
    else{
        r=m/a;
    }
    cout<<r;
}
else if((n>a)&&(m<=a)){
    if(n%a!=0){
        r=n/a+1;
    }
    else{
        r=n/a;
    }
    cout<<r;
}
else if((n>a)&&(m>a)){
    if(n%a!=0){
        r1=n/a+1;
    }
    else{
        r1=n/a;
    }
    if(m%a!=0){
        r2=m/a+1;
    }
    else{
        r2=m/a;
    }
    cout<<(r1*r2);
}
return 0;
}
