#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
char a[100],b[100];
char c;
int i=0;
cin>>a>>b;
while(a[i]!='\0'){
    a[i]=tolower(a[i]);
    i++;
}
i=0;
while(b[i]!='\0'){
    b[i]=tolower(b[i]);
    i++;

}
if(strcmp(a,b)==0){
    cout<<0;
}
else if(strcmp(a,b)<0){
    cout<<-1;
}
else if(strcmp(a,b)>0){
    cout<<1;
}
return 0;
}
