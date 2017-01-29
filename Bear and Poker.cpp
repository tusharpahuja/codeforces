
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long n;
cin>>n;
long long a[n],i;
for(i=0;i<n;i++){
    cin>>a[i];
    while(a[i]%2==0) a[i] /=2;
    while(a[i]%3==0) a[i] /=3;
}
if(count(a,a+n,a[0])==n){
    cout<<"Yes";
}
else{
    cout<<"No";
}

return 0;
}

