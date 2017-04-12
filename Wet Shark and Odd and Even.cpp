#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
long long n,odd=0,even=0,sum=0;
cin>>n;
long long a[n];
int i,k;
for(i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(i=0;i<n;i++){
    if(a[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
if(odd%2==0){
    for(i=0;i<n;i++){
        sum += a[i];
    }
    cout<<sum;
}
else{
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            k=i;
            break;
        }
    }
    for(i=0;i<n;i++){
        if(i!=k){
            sum += a[i];
        }
    }
    cout<<sum;
}
return 0;
}
