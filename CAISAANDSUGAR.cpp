#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
int n,i,s,maxi=0,k=0;
cin>>n>>s;
int a[n][2],t[n],z[n];
for(i=0;i<n;i++){
    cin>>a[i][0]>>a[i][1];
}
for(i=0;i<n;i++){
    t[i] = (s*100)-(a[i][0]*100+a[i][1]);
    z[i] = t[i]%100;
}
for(i=0;i<n;i++){
    if(t[i]<0){
        k++;
    }
}
if(k==n){
    cout<<-1;
    exit(0);
}
for(i=0;i<n;i++){
    if(z[i]>maxi){
        maxi = z[i];
    }
}
cout<<maxi;
return 0;
}
