#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){
int n,i,j,pl=0,t=0,c=0,d=0,k;
cin>>n;
string a;
cin>>a;
vector<int> v;
for(i=0;i<n;i++){
    if(a[i]=='.'){
        t++;
    }
    else{
        pl++;
        v.push_back(i);
    }
}
if(pl<5){
    cout<<"no";
    exit(0);
}
for(i=0;i<n;i++){
    c=0;
    if(a[i]=='*'){
        for(j=i+1;j<n;j++){
            if(a[j]=='*'){
                d = abs(i-j);
                for(k=1;k<=3;k++){
                    if(j+k*d>=n) break;
                    if(a[j+k*d]=='.') break;
                }
                if(k==4){
                    c=1;
                    break;
                }
            }
        }
    }
    if(c==1){
        break;
    }
}
if(c==1){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
return 0;
}




