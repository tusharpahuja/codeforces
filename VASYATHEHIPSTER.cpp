#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int a,b,maxi,mini;
cin>>a>>b;
maxi = (a>b)?a:b;
mini = (a<b)?a:b;
if(a==b){
    cout<<a<<" "<<b-a;
}
else{
    cout<<mini<<" "<<((maxi-mini)/2);
}
return 0;
}
