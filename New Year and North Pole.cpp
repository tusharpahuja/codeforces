#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<map>
using namespace std;

int main(){
long long n,i,dis=0;
cin>>n;
long long t[n];
string a[n];
for(i=0;i<n;i++){
    cin>>t[i]>>a[i];
}
for(i=0;i<n;i++){
    if(dis==0){
        if(a[i]!="South"){
            cout<<"NO";
            exit(0);
        }
    }
    if(dis==20000){
        if(a[i]!="North"){
            cout<<"NO";
            exit(0);
        }
    }
    if(a[i]=="South"){
        dis += t[i];
        if(dis>20000){
            cout<<"NO";
            exit(0);
        }
    }
    else if(a[i]=="North"){
        dis -= t[i];
        if(dis<0){
            cout<<"NO";
            exit(0);
        }
    }
}
if(dis!=0){
    cout<<"NO";
    exit(0);
}
else{
    cout<<"YES";
}
return 0;
}






