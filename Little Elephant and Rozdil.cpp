#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
long long n;
cin>>n;
long long a[n],t[n],i,j;
for(i=0;i<n;i++){
    cin>>a[i];
    t[i]=a[i];
}
sort(a,a+n);
if(a[0]!=a[1]){
    for(i=0;i<n;i++){
        if(t[i]==a[0]){
            cout<<i+1;
            exit(0);
        }

    }
}
else{
    cout<<"Still Rozdil";
}
return 0;
}
