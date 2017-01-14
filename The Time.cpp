#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
string s,m1,m2;
cin>>s;
long long h,m,a,t;
cin>>a;
h = atoll(s.substr(0,2).c_str());
m = atoll(s.substr(3,2).c_str());
h = (h+a/60)%24;
a = a%60;
m = m + a;
if(m>=60){
    m = m - 60;
    h = (h+1)%24;
}
if(h<10 && m<10){
    cout<<"0"<<h<<":"<<"0"<<m;
}
else if(h<10 && m>=10){
    cout<<"0"<<h<<":"<<m;
}
else if(h>=10 && m<10){
    cout<<h<<":"<<"0"<<m;
}
else{
    cout<<h<<":"<<m;
}
return 0;
}
