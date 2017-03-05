#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
int t[1000001];
int main(){
int i,j,k,a,b,c;
memset(t,0,sizeof(t));
long long s=0;
cin>>a>>b>>c;
for(i=1;i<=1000000;i++){
    for(j=i;j<=1000000;j+=i){
        t[j]++;
    }
}
for(i=1;i<=a;i++){
    for(j=1;j<=b;j++){
        for(k=1;k<=c;k++){
            s += t[i*j*k];
        }
    }
}
cout<<s%(long long)1073741824;
return 0;
}
