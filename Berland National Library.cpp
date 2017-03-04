#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;

int main(){
int n,i;
int maxi=0,now=0;
cin>>n;
char s;
int id;
map<int,char> m;
for(i=0;i<n;i++){
    cin>>s>>id;

    m[id];
    if(s=='+'){
        m[id]='+';
        now++;
        if(now>maxi){
            maxi = now;
        }
    }
    else{
        if(m[id]=='\0'){
            maxi++;
        }
        else{
            m[id] = '-';
            now--;
        }
    }
}
cout<<maxi;
return 0;
}


