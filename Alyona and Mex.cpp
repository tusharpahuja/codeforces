#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long n,i,prev;
cin>>n;
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
a[0] = 1;
for(i=1;i<n;i++){
    if(abs(a[i]-a[i-1])>1){
        a[i] = a[i-1]+1;
    }
}
cout<<a[n-1]+1;
return 0;
}






