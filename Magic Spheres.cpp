#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<cstddef>
using namespace std;

int main(){
long long a,b,c,x,y,z,extra=0,xc=0,yc=0,zc=0;
cin>>a>>b>>c>>x>>y>>z;
if((x==a)&&(y==b)&&(z==c)){
    cout<<"Yes";
    exit(0);
}
if(a>x){
    extra += (a-x)/2;
    x=0;
    a=0;
    xc=1;
}
else if(a==x){
    x=0;
    a=0;
    xc=1;
}
if(b>y){
    extra += (b-y)/2;
    y=0;
    b=0;
    yc=1;
}
else if(b==y){
    y=0;
    b=0;
}
if(c>z){
    extra += (c-z)/2;
    z=0;
    c=0;
    zc=1;
}
else if(c==z){
    z=0;
    c=0;
}
if((x+y+z)>(extra+a+b+c)){
    cout<<"No";
}
else{
    cout<<"Yes";
}
return 0;
}

