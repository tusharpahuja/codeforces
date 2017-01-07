#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int n,h,i,width = 0;
cin>>n>>h;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    if(a[i]<=h){
        width += 1;
    }
    else{
        width += 2;
    }
}
cout<<width;
return 0;
}
