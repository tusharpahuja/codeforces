#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long n,i,start=0,sum=0,cou=0,temp;
cin>>n;
vector<long long> v,a,b;
for(i=0;i<n;i++){
    cin>>temp;
    sum += temp;
    v.push_back(temp);
}
sort(v.begin(),v.begin()+n);
if(v[0]!=0){
    cout<<-1;
    exit(0);
}
for(i=0;i<n;i++){
    if(v[i]%3==1 && a.size()<2){
        a.push_back(i);
    }
    if(v[i]%3==2 && b.size()<2){
        b.push_back(i);
    }
}

if(sum%3==1){
    if(a.size()>0){
        v.erase(v.begin()+a[0]);
    }
    else if(b.size()==2){
        v.erase(v.begin()+b[1]);
        v.erase(v.begin()+b[0]);
    }
    else{
        cout<<-1;
        exit(0);
    }
}
else if(sum%3==2){
    if(b.size()>0){
        v.erase(v.begin()+b[0]);
    }
    else if(a.size()==2){
        v.erase(v.begin()+a[1]);
        v.erase(v.begin()+a[0]);
    }
    else{
        cout<<-1;
        exit(0);
    }
}
if(v[v.size()-1]==0){
    cout<<0;
    exit(0);
}
for(i=v.size()-1;i>=0;i--){
    cout<<v[i];
}
return 0;
}






