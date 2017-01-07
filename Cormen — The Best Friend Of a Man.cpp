#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
int n,k,i,j,sum=0;
cin>>n>>k;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=1;i<n;i++){
    if((a[i]+a[i-1])<k){
        sum += abs((a[i]+a[i-1])-k);
        a[i] += abs((a[i]+a[i-1])-k);
    }
}
cout<<sum<<endl;
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}

return 0;
}
