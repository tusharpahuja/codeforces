#include<iostream>
using namespace std;
#include<stdlib.h>
#include<ctype.h>
int main(){
char w[100];
cin>>w;
int k=0,u=0,l=0;
while(w[k]!='\0'){
    if((w[k]>='A')&&(w[k]<='Z')){
        u++;
    }
    else if((w[k]>='a')&&(w[k]<='z')){
        l++;
    }
    k++;
}
k=0;
if(u>l){
    while(w[k]!='\0'){
        w[k]=toupper(w[k]);
        k++;
    }
}
else{
    while(w[k]!='\0'){
        w[k]=tolower(w[k]);
        k++;
    }
}
cout<<w;
return 0;
}
