#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
long long n,i,k,maxi=-1000000000,val;
cin>>n>>k;
long long f[n],t[n];
for(i=0;i<n;i++){
    cin>>f[i]>>t[i];
}
for(i=0;i<n;i++){
    if(t[i]<=k){
        val = f[i];
    }
    else{
        val = f[i]-(t[i]-k);
    }

    if(val > maxi){
        maxi = val;
    }
}
cout<<maxi;
return 0;
}

