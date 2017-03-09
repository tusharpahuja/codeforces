#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<list>
using namespace std;

int main(){
string a,b;
int l,l1,i,le=0,ri=0,m,c=0,s=0;
cin>>a;
cin>>b;
list<char> lst;
list<char>::iterator it;
l = strlen(a.c_str());
l1 = strlen(b.c_str());
for(i=0;i<l;i++){
    if(a[i]!='|'){
        if(c==0){
            le++;
        }
        else{
            ri++;
        }
    }
    else{
        c = 1;
    }
    lst.push_back(a[i]);
}
if(abs(le-ri)>l1){
    cout<<"Impossible";
    exit(0);
}
s=0;
if((l1-abs(le-ri))%2==0){
    if(le>ri){
        m = le-ri;
        for(i=0;i<m;i++){
            lst.push_back(b[s]);
            s++;
        }
        c=0;
        for(i=s;i<l1;i++){
            if(c==0){
                lst.push_front(b[i]);
                c=1;
            }
            else{
                lst.push_back(b[i]);
                c=0;
            }
        }
    }
    else if(ri>le){
        m = ri-le;
        for(i=0;i<m;i++){
            lst.push_front(b[s]);
            s++;
        }
        c=0;
        for(i=s;i<l1;i++){
            if(c==0){
                lst.push_front(b[i]);
                c=1;
            }
            else{
                lst.push_back(b[i]);
                c=0;
            }
        }
    }
    else{
        c=0;
        for(i=s;i<l1;i++){
            if(c==0){
                lst.push_front(b[i]);
                c=1;
            }
            else{
                lst.push_back(b[i]);
                c=0;
            }
        }
    }
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it;
    }
}
else{
    cout<<"Impossible";
}
return 0;
}



