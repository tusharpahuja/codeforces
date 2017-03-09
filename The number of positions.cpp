#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int n,a,b,total=0,i,j;
cin>>n>>a>>b;
for(i=a;i<n;i++){
    for(j=0;j<=b;j++){
        if((i+j+1)==n){
            total++;
        }
    }
}
cout<<total;
return 0;
}
