#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<cctype>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
int n,k,i,t;
cin>>n;
string a;
cin>>a;
cin>>k;
for(i=0;i<n;i++){
    if(((a[i]>='a')&&(a[i]<='z'))){
        t = (int(a[i]) + k%26);
        if(t>122){
            t = t-26;
        }
        a[i] = char(t);
    }
    else if(((a[i]>='A')&&(a[i]<='Z'))){
        t = (int(a[i]) + k%26);
        if(t>90){
            t = t-26;
        }
        a[i] = char(t);
    }
}
cout<<a;
return 0;
}






