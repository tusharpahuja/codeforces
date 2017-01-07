#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<map>
using namespace std;

int main(){
long long n,i;
cin>>n;
map<string,long long> m;
string a;
for(i=0;i<n;i++){
    cin>>a;
    if(m[a]==0){
        cout<<"OK"<<endl;
        m[a]++;
    }
    else{
        cout<<a<<m[a]<<endl;
        m[a]++;
    }
}

return 0;
}
