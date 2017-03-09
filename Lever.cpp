#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
string a;
cin>>a;
long long l,i,m,le=0,ri=0,y;
l = strlen(a.c_str());
for(i=0;i<l;i++){
    if(a[i]=='^'){
        m = i;
        break;
    }
}
for(i=m-1;i>=0;i--){
    if(a[i]!='='){
        y = atoll(a.substr(i,1).c_str());
        le += abs(m-i)*y;
    }
}
for(i=m+1;i<l;i++){
    if(a[i]!='='){
        y = atoll(a.substr(i,1).c_str());
        ri += abs(m-i)*y;
    }
}
if(le==ri){
    cout<<"balance";
}
else if(le>ri){
    cout<<"left";
}
else{
    cout<<"right";
}
return 0;
}



