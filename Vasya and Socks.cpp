#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
int n,m,i,temp1=0,sum=0;
cin>>n>>m;
if(m>n){
    cout<<n;
    exit(0);
}
while(n!=0){
    n--;
    temp1++;
    sum++;
    if(((temp1)%m)==0){
        n++;
        temp1=0;
    }
}
cout<<sum;
return 0;
}






