#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
long long n,t,i,start = 1;
cin>>n>>t;
long long a[n];
if(t>n){
    cout<<"NO";
    exit(0);
}
for(i=0;i<n-1;i++){
    cin>>a[i];
}
while(start<t){
    start = start + a[start - 1];
}
if(start==t){
    cout<<"YES";
}
else{
    cout<<"NO";
}

return 0;
}






