#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<map>
using namespace std;

int main(){
long long n,i,j,temp,sum=0;
cin>>n;
long long a[n];
map<long long,long long> m1;
for(i=0;i<n;i++){
    cin>>a[i];
    m1[a[i]]++;
}
for(i=0;i<n;i++){
    m1[a[i]]--;
    for(j=0;j<32;j++){
        temp = 1<<j;
        if(temp>=a[i]){
            sum += m1[temp-a[i]];
        }
    }
}
cout<<sum;
return 0;
}
