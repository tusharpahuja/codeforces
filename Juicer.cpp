#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
long long n,b,d,i,sum=0,num=0;
cin>>n>>b>>d;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    if(a[i]<=b){
        sum += a[i];
        if(sum>d){
            sum = 0;
            num++;
        }
    }
}
cout<<num;
return 0;
}

