#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

long long setb(long long n){
    long long c=0;
    while(n){
        c += n&1;
        n >>= 1;
    }
    return c;
}

int main(){
long long n,m,k,i,c=0;
cin>>n>>m>>k;
long long x[m+1];
for(i=1;i<=m+1;i++){
    cin>>x[i];
}
for(i=1;i<=m;i++){
    if(setb(x[i]^x[m+1])<=k){
        c++;
    }
}
cout<<c;

return 0;
}







