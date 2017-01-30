#include<iostream>
#include<stdlib.h>
using namespace std;
void check(int k){
int i=k,j=0,q,r,temp=0;
int a[4];
while(i>9){
        q=i/10;
        r=i%10;
        a[j]=r;
        j++;
        i=q;
    }
    a[j]=i;
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(a[i]==a[j]){
                temp++;
            }
        }
    }
    if(temp==0){
        cout<<k;
        exit(0);
    }
}
int main(){
int y,q,r,i,j=0,k,temp;
cin>>y;
if(y<1000){
    exit(0);
}
if((y-((int)y))==0){
    exit(0);
}
int a[4];
for(k=y+1;k<=9000;k++){
    check(k);
}
}
