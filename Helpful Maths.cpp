#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
char a[101];
cin>>a;
int len,i,b;
len = strlen(a);
vector<char> v;
for(i=0;i<len;i=i+2){
    v.push_back(a[i]);
}
sort(v.begin(),v.end());
for(i=0;i<v.size();i++){
    if(i!=v.size()-1){
        cout<<v[i]<<"+";
    }
    else{
        cout<<v[i];
    }

}
return 0;
}






