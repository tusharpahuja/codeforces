#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main(){
int n,m,i,j,len,l1,er=0,co=0;
cin>>n>>m;
string a;
//int del[m];
vector<string> v;
vector<char> ch;
vector<int> del;
vector<int>::iterator it;
for(i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}
for(i=0;i<m;i++){
    cin>>l1;
    del.push_back(l1);
}
len = strlen(v[del[0]-1].c_str());
for(i=1;i<m;i++){
    l1 = strlen(v[del[i]-1].c_str());
    if(l1!=len){
        cout<<"No";
        exit(0);
    }
}
for(i=0;i<len;i++){
    er=0;
    for(j=1;j<m;j++){
        if(v[del[0]-1][i]!=v[del[j]-1][i]){
            ch.push_back('?');
            er=1;
            break;
        }
    }
    if(er==0){
        ch.push_back(v[del[0]-1][i]);
    }
}
for(i=0;i<n;i++){
    it = find(del.begin(),del.end(),i+1);
    co=0;
    if(it==del.end()){
        l1 = strlen(v[i].c_str());
        if(len==l1){
            for(j=0;j<len;j++){
                if(ch[j]!='?'){
                    if(ch[j]==v[i][j]){
                        co++;
                    }
                }
                else{
                    co++;
                }
            }
        }
    }
    if(co==len){
        cout<<"No";
        exit(0);
    }
}
cout<<"Yes"<<endl;
for(i=0;i<len;i++){
    cout<<ch[i];
}
return 0;
}
