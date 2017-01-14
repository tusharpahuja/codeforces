#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long n,d1,i,l,co=0,j,m=0;
cin>>n>>d1;
string a;
int d[d1];
memset(d,0,sizeof(d));
vector<string> v;
for(i=0;i<d1;i++){
    cin>>a;
    v.push_back(a);
}
for(i=0;i<v.size();i++){
    l = strlen(v[i].c_str());
    for(j=0;j<l;j++){
        if(v[i][j]=='0'){
            d[i]=1;
            break;
        }
    }
}
//for(i=0;i<d1;i++){
//    cout<<d[i]<<" ";
//}
for(i=0;i<d1;i++){
    co=1;
    if(d[i]!=0){
        for(j=i+1;j<d1;j++){
            if(d[j]!=0){
                co++;
            }
            else{
                break;
            }
        }
        if(co>m){
            m = co;
        }
    }
}
cout<<m;
return 0;
}
