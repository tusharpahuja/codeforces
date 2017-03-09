#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int n,m,i,j,sum=0;
cin>>n>>m;
int b[n],temp[m];
for(i=0;i<n;i++){
    cin>>b[i];
}
for(i=0;i<m;i++){
    temp[i]=0;
}
for(i=0;i<n;i++){
    temp[b[i]-1]++;
}
for(i=0;i<m-1;i++){
    for(j=i+1;j<m;j++){
        sum = sum + temp[i]*temp[j];
    }
}
cout<<sum;
return 0;
}
