#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long n,i,j,sum=0,temp;
cin>>n;
long long a[n],p[n];
for(i=0;i<n;i++){
    cin>>a[i]>>p[i];
}
sum += a[0]*p[0];
temp = p[0];
for(i=1;i<n;i++){
    if(p[i]<temp){
        sum += a[i]*p[i];
        temp = p[i];
    }
    else{
        sum += a[i]*temp;
    }
}
cout<<sum;
return 0;
}
