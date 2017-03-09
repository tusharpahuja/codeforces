#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int n,i,j;
cin>>n;
int x[n],y[n],z[n],sum1=0,sum2=0,sum3=0;
for(i=0;i<n;i++){
    cin>>x[i]>>y[i]>>z[i];
}

for(i=0;i<n;i++){
    sum1 += x[i];
}

for(i=0;i<n;i++){
    sum2 += y[i];
}

for(i=0;i<n;i++){
    sum3 += z[i];
}

if((sum1==0)&&(sum2==0)&&(sum3==0)){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}
