#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int n,i,len=0,c=0,z=0;
cin>>n;
char a[n];
cin>>a;
int temp[n];
for(i=0;i<n;i++){
    if((a[i]=='B')&&(len==0)&&(i!=(n-1))){
        c++;
        len++;
    }
    else if((a[i]=='B')&&(i==(n-1))){
        if(len==0){
            c++;
        }
        len++;
        temp[z]=len;
        z++;
    }
    else if((a[i]=='B')&&(len>0)){
        len++;
    }
    else if((a[i]=='W')&&(a[i-1]=='B')){
        temp[z]=len;
        len=0;
        z++;

    }
}
cout<<c<<endl;
for(i=0;i<z;i++){
    cout<<temp[i]<<" ";
}
}
