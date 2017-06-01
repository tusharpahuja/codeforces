#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n,i,length,f1=0,f0=0;
cin>>n;
char a[n];
cin>>a;
length = strlen(a);
for(i=0;i<length;i++){
    if(a[i]=='1'){
        f1++;
    }
    else{
        f0++;
    }
}
if(f1>f0){
    cout<<(f1-f0);
}
else{
    cout<<(f0-f1);
}
return 0;
}
