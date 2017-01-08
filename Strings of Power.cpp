#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main(){
string a,b;
long long len,i,s=0,j,c=0,h=0;
cin>>a;
vector<long long> v1,v2;
len = strlen(a.c_str());
while(s<len){
    b = a.substr(s,5).c_str();
    if(strcmp(b.c_str(),"heavy")==0){
        v1.push_back(s);
        h++;
        s += 5;
    }
    else if(strcmp(b.c_str(),"metal")==0){
        v2.push_back(s);
        s += 5;
        c += h;
    }
    else{
        s++;
    }
}
cout<<c;
return 0;
}
