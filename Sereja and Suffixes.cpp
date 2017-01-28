#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main(){
long long n,m,i,j;
cin>>n>>m;
map<long long,long long> yo;
long long a[n+2],l[m+2],dp[n+2];
for(i=1;i<=n;i++){
    cin>>a[i];
}
for(i=1;i<=m;i++){
    cin>>l[i];
}

dp[n+1]=0;
for(i=n;i>=1;i--){
    yo[a[i]]++;
    dp[i] = dp[i+1];
    if(yo[a[i]]==1){
        dp[i]++;
    }
}
for(i=1;i<=m;i++){
    cout<<dp[l[i]]<<endl;
}
return 0;
}







