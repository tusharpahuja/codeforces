#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long n,i,j;
cin>>n;
long long a[n],m[n],ma=0;

for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=n-1;i>=0;i--){
    m[i] = ma + 1;
    ma = max(ma,a[i]);
}
for(i=0;i<n;i++){
    if(m[i]>a[i]){
        cout<<(m[i]-a[i])<<" ";
    }
    else{
        cout<<0<<" ";
    }
}
return 0;
}






