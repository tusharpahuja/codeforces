#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
char a[100];
int i=0,c=0,k1=0,k2=0,k3=0;
cin>>a;
while(a[i]!='\0'){
    c++;
    i++;
}
i=0;
while(a[i]!='\0'){
    if(isupper(a[i])==true){
        k1++;
        i++;
    }
}
i=0;
while(a[i]!='\0'){
    if((islower(a[i]==true))&&(i==0)){
        k2++;
        i++;
    }
    else if((i>0)&&(isupper(a[i])==true)){
        k2++;
        i++;
    }
    else{
        i++;
    }
}
if(k1==c){
    i=0;
    while(a[i]!='\0'){
        a[i]=tolower(a[i]);
        i++;
    }
}
else if(k2==c){
    i=0;
    while(a[i]!='\0'){
        if(i==0){
            a[i]=toupper(a[i]);
            i++;
        }
        else{
            a[i]=tolower(a[i]);
            i++;
        }
    }
}
i=0;
while(a[i]!='\0'){
    cout<<a[i];
    i++;
}
return 0;
}
