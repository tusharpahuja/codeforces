#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
int len,len1,i,start=0,prev=0,cou=0;
string a,b,c;
cin>>a;
len = strlen(a.c_str());
vector<char> v;
if(a[0]=='-'){
    cou=0;
    start=1;
    prev=1;
    while((a[prev]!='.')&&(prev<len)){
        prev++;
    }
    if(prev==len){
        b = a.substr(start,len-1);
        c = "00";
    }
    else{
        b = a.substr(start,prev-start);
        c = a.substr(prev+1,2);
    }
    len1 = strlen(b.c_str());
    for(i=len1-1;i>=0;i--){
        if(cou==3){
            v.push_back(',');
            cou=1;
            v.push_back(b[i]);
        }
        else{
            v.push_back(b[i]);
            cou++;
        }
    }
    cout<<"($";
    for(i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    cout<<".";
    len1 = strlen(c.c_str());
    if(len1==1){
        cout<<c<<"0)";
    }
    else{
        cout<<c<<")";
    }
}
else{
    cou=0;
    start=0;
    prev=0;
    while((a[prev]!='.')&&(prev<len)){
        prev++;
    }
    if(prev==len){
        b = a.substr(start,len);
        c = "00";
    }
    else{
        b = a.substr(start,prev-start);
        c = a.substr(prev+1,2);
    }
    len1 = strlen(b.c_str());
    for(i=len1-1;i>=0;i--){
        if(cou==3){
            v.push_back(',');
            cou=1;
            v.push_back(b[i]);
        }
        else{
            v.push_back(b[i]);
            cou++;
        }
    }
    cout<<"$";
    for(i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    cout<<".";
    len1 = strlen(c.c_str());
    if(len1==1){
        cout<<c<<"0";
    }
    else{
        cout<<c;
    }
}
return 0;
}









