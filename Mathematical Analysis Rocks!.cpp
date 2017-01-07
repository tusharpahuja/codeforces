#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long n,i;
cin>>n;
long long a[n],b[n],c[n+1];
for(i=0;i<n;i++){
    cin>>a[i];
    c[i+1]=0;
}
for(i=0;i<n;i++){
    cin>>b[i];
    c[a[i]] = b[i];
}
for(i=1;i<=n;i++){
    cout<<c[i]<<" ";
}
return 0;
}










