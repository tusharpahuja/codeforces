#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long n,m,i,j;
cin>>n>>m;
string z;
vector<string> a,b,c;
vector<string>::iterator it,s;
for(i=0;i<n;i++){
    cin>>z;
    a.push_back(z);
}
for(i=0;i<m;i++){
    cin>>z;
    b.push_back(z);
}
if(n<m){
    s = a.begin();
    while(s!=a.end() && a.size()>0 && b.size()>0){
        it = find(b.begin(),b.end(),*s);
        if(it!=b.end()){
            c.push_back(*s);
            b.erase(it);
            a.erase(s);
        }
        else{
            s++;
        }
        //s++;
    }
}
else{
    s = b.begin();
    while(s!=b.end() && b.size()>0 && a.size()>0){
        it = find(a.begin(),a.end(),*s);
        if(it!=a.end()){
            c.push_back(*s);
            //cout<<*s<<endl;
            b.erase(s);
            a.erase(it);
        }
        else{
            s++;
        }
        //s++;
    }
}
//exit(0);
if(a.size()>b.size()){
    cout<<"YES";
}
else if(a.size()<b.size()){
    cout<<"NO";
}
else{
    if(c.size()%2!=0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

return 0;
}
