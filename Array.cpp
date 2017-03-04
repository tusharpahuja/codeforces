#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<sstream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
int n,n1,n2,n3,i,j,pp=0,pn=0,temp,pco=0,nco=0,zco=0,pos=0,neg=0,zer=0;
cin>>n;
vector<int> p,ne,z;
vector<int>::iterator it;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>0){
        pos++;
    }
    else if(a[i]<0){
        neg++;
    }
    else if(a[i]==0){
        zer++;
    }
}
if(pos==0){
    for(i=n-1;i>=0;i--){
        if((a[i]<0)&&(pn<2)){
            p.push_back(a[i]);
            pn++;
        }
        else if(a[i]<0){
            ne.push_back(a[i]);
            nco++;
        }
        else if(a[i]==0){
            z.push_back(a[i]);
            zco++;
        }
        else{
            z.push_back(a[i]);
            zco++;
        }
    }
    if(nco%2==0){
        temp = ne.back();
        ne.pop_back();
        nco--;
        z.push_back(temp);
        zco++;
    }
    cout<<nco<<" ";
    for(it = ne.begin();it != ne.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<pn<<" ";
    for(it = p.begin();it != p.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<zco<<" ";
    for(it = z.begin();it != z.end();it++){
        cout<<*it<<" ";
    }
}
else{
    for(i=n-1;i>=0;i--){
        if((a[i]<0)&&(nco<1)){
            ne.push_back(a[i]);
            nco++;
        }
        else if(a[i]>0){
            p.push_back(a[i]);
            pco++;
        }
        else if(a[i]==0){
            z.push_back(a[i]);
            zco++;
        }
        else{
            z.push_back(a[i]);
            zco++;
        }
    }
    if(nco%2==0){
        temp = ne.back();
        ne.pop_back();
        nco--;
        z.push_back(temp);
        zco++;
    }
    cout<<nco<<" ";
    for(it = ne.begin();it != ne.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<pco<<" ";
    for(it = p.begin();it != p.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl<<zco<<" ";
    for(it = z.begin();it != z.end();it++){
        cout<<*it<<" ";
    }
}
return 0;
}
