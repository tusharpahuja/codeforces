#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long n,i,l,j,s=0,c=0;
cin>>n;
long long a[n];
string b;
for(i=0;i<n;i++){
    cin>>b;
    l = strlen(b.c_str());
    s=0;
    for(j=0;j<l;j++){
        s += atoll(b.substr(j,1).c_str());
    }
    a[i] = s;
}
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[i]!=-1 && a[j]!=-1){
            if((a[i]+a[j])%3==0){
                a[i] = -1;
                a[j] = -1;
                c++;
                break;
            }
        }
    }
}
cout<<c;
return 0;
}






