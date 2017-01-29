#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long n,m,k,x,y,i,j,t,mi=0,ma=0,s=0,tot,val=0;
cin>>n>>m>>k>>x>>y;
mi = 2e18;
long long a[n+1][m+1],d[n+1];
memset(a,0,sizeof(a));
val = n*m + (n-2)*m;
if(n==1){
    val = m;
}
tot = k/val;
k = k%val;
for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        if(k==0){
            break;
        }
        a[i][j]++;
        k--;
    }
    d[i]=1;
}
for(i=n-1;i>=2;i--){
    for(j=1;j<=m;j++){
        //a[i][j]++;
        if(k==0){
            break;
        }
        a[i][j]++;
        k--;
    }
    d[i]++;
}

for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        mi = min(mi,a[i][j] + d[i]*tot);
        ma = max(ma,a[i][j] + d[i]*tot);
        if(i==x && j==y){
            s = a[i][j] + d[i]*tot;
        }
    }
}

cout<<ma<<" "<<mi<<" "<<s;
return 0;
}

