#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

long long dis(long long a[], long long n,long long k){
    long long i,sum=0;
    for(i=0;i<n;i++){
        sum += abs(a[i]-k);
    }
    return sum;
}

int main(){
long long n,i,one,two;
cin>>n;
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
one = dis(a,n,a[n/2]);
two = dis(a,n,a[(n/2)-1]);

if(n%2==0){
    if(one>=two){
        cout<<a[(n/2)-1];
    }
    else{
        cout<<a[n/2];
    }
}
else{
    cout<<a[n/2];
}
return 0;
}


