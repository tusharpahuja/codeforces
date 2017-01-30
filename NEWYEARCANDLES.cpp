#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int a,b,s=0;
cin>>a>>b;
if((a<1)||(a>1000)||(b<2)||(b>2000)){
    exit(0);
}
s=s+a;
if((a%2)==0){
while(a>=b){
    a=a/b;
    s=s+a;
}
}
else{
    while(a>=b){
    a=a/b;
    s=s+a;
}
s++;
}
cout<<s;
return 0;
}
