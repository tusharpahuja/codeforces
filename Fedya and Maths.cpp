#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
string n;
long long len,n1;
cin>>n;
len = strlen(n.c_str());
if(len==1){
    n1 = atoi(n.substr(len-1,1).c_str());
}
else{
    n1 = atoi(n.substr(len-2,2).c_str());
}
if(n1%4==0){
    cout<<4;
}
else{
    cout<<0;
}
return 0;
}






