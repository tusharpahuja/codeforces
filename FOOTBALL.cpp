#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
char a[100];
int i=0,c=0,k,j;
cin>>a;
while(a[i]!='\0'){
    c++;
    i++;
}
for(i=0;i<c;i++){
    j=i+1;
    k=1;
    while(a[j]==a[i]){
        k++;
        j++;
    }
    if(k>=7){
        cout<<"YES";
        exit(0);
    }
}
cout<<"NO";
}
