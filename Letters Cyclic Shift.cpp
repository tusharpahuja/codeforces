#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>

int main(){
string a;
cin>>a;
long long l,i,s=0;
l = strlen(a.c_str());
while((a[s]=='a')&&(s<l)){
    s++;
}
if(s==l){
    a[l-1] = 'z';
    cout<<a;
    exit(0);
}
while((a[s]!='a')&&(s<l)){
    a[s]--;
    s++;
}
cout<<a;
return 0;
}
