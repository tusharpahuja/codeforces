#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int a[3],i,sum=0,k=0,j=0,d1,d2,d3;
for(i=0;i<3;i++){
    cin>>a[i];
}
d1 = a[0];
d2 = a[1];
d3 = a[2];
if(d1>d2){
    sum = sum + d2;
    k=2;
}
else{
    sum = sum + d1;
    k=1;
}
if(d3>(d1+d2)){
    sum = sum + (d1+d2);
    if(k==1){
        k=2;
    }
    else{
        k=1;
    }
}
else{
    sum = sum + d3;
    if(k==1){
        k=2;
    }
    else{
        k=1;
    }
}
if(k==1){
    if(d1>(d3+d2)){
        sum = sum + (d3+d2);
    }
    else{
        sum = sum + d1;
    }
}
else{
    if(d2>(d3+d1)){
        sum = sum + (d3+d1);
    }
    else{
        sum = sum + d2;
    }
}
cout<<sum;
return 0;
}
