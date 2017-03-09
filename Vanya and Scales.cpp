#include<iostream>
#include<vector>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;

int main(){
long long w,m,i,r;
cin>>w>>m;
while(m>0){
    r = m%w;
    if(r==0 || r==1){
        m = m/w;
    }
    else if(r== w-1){
        m = (m+1)/w;
    }
    else{
        cout<<"NO";
        exit(0);
    }
}
cout<<"YES";
return 0;
}
