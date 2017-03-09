#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
#include<string.h>
using namespace std;

int main(){
long long n,a,a1,a2,i,b,len;
cin>>n>>a>>b;
a = a-1;
b = b-1;
char st[1000000];
cin>>st;
len = strlen(st);
if(st[a]==st[b]){
    cout<<0;
    exit(0);
}
cout<<1;
return 0;
}
