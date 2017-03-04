#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
int k,i,sum=0,cou=0;
cin>>k;
int a[12];
for(i=0;i<12;i++){
    cin>>a[i];
}
if(k==0){
    cout<<0;
    exit(0);
}
sort(a,a+12);
for(i=11;i>=0;i--){
    if(sum>=k){
        cout<<11-i;
        exit(0);
    }
    sum = sum + a[i];
}
if(sum>=k){
    cout<<12;
    exit(0);
}
cout<<-1;
return 0;
}







