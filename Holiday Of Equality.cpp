#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long n,i,m=0,s=0;
cin>>n;
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>m){
        m = a[i];
    }
}
for(i=0;i<n;i++){
    s += abs(a[i]-m);
}
cout<<s;
return 0;
}
