#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
int n,t,i,j,k,q,r,p,temp;
cin>>n>>t;
int a[n];
if((n<1)&&(n>100)){
    exit(0);
}
if((t<2)&&(t>10)){
    exit(0);
}
for(i=pow(10,n-1);i<pow(10,n);i++){
    k=i;
    j=0;
    while(k>9){
        q=k/10;
        r=k%10;
        a[j]=r;
        k=q;
        j++;
    }
    a[j]=k;
    if(((i%t)==0)&&(a[n-1]!=0)){
        cout<<i;
        exit(0);
    }
}*/
cout<<-1;
}
