#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int i,a,n,sum=0,asum=0,k=1,c=0;
cin>>a;
while(asum<=a){
    sum = sum + k;
    asum = asum + sum;
    k++;
    c++;
}
cout<<(c-1);

return 0;
}
