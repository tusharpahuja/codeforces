#include<iostream>
using namespace std;
#include<stdlib.h>
#include<math.h>

int main(){
long long a,b,c=0,a1,b1,t;
cin>>a>>b;
if(a==b){
    cout<<1;
    exit(0);
}
if(a==1){
    cout<<b;
    exit(0);
}
if(b==1){
    cout<<a;
    exit(0);
}
if(a>b){
    a1=a;
    b1=b;
}
else{
    a1=b;
    b1=a;
}
while(a1!=b1){
    c=c+(long long)(a1/b1);
    a1=a1%b1;
    if(a1==0){
        break;
    }
    if(a1==1){
        c=c+b1;
        break;
    }
    if(b1==1){
        c=c+a1;
        break;
    }
    if(a1<b1){
        t=a1;
        a1=b1;
        b1=t;
    }
}
cout<<c;
return 0;
}




