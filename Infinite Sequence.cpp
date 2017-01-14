#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long a,b,c;
cin>>a>>b>>c;
if(a==b){
    cout<<"YES";
    exit(0);
}
if(c==0){
    if(a==b){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    exit(0);
}
if(b>a && c>0){
    if(((b-a)%c)==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
else if(b<a && c<0){
    if(((a-b)%abs(c))==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
else{
    cout<<"NO";
}
return 0;
}
