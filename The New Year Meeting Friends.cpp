#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int a[3],i,j,temp;
for(i=0;i<3;i++){
    cin>>a[i];
}
for(i=0;i<2;i++){
    for(j=1;j<3;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
cout<<((a[1]-a[0])+(a[2]-a[1]));

return 0;
}
