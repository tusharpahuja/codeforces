#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int n,x,curr=1,k=0,i,sum=0;
cin>>n>>x;
int a[n][2];
for(i=0;i<n;i++){
    cin>>a[i][0]>>a[i][1];
}
while(curr!=(a[n-1][1]+1)){
    if((a[k][0]-(curr+x))>=0){
        curr += x;
    }
    else if((a[k][0]-(curr+x))==0){
        curr += x;
        sum = (a[k][1]+1)-curr;
        curr = (a[k][1]+1);
        k++;
    }
    else{
        sum = sum + (a[k][1]+1)-curr;
        curr = (a[k][1]+1);
        k++;
    }
}
cout<<sum;
return 0;
}
