#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
int n,m;
string s;
cin>>n>>m;
int a[n][m],i,j,best[n],maxi,sum=0;
for(i=0;i<n;i++){
    cin>>s;
    for(j=0;j<m;j++){
        a[i][j] = s[j];
    }
    best[i+1]=0;
}
for(i=0;i<m;i++){
    maxi = 0;
    for(j=0;j<n;j++){
        if(a[j][i]>=maxi){
            maxi = a[j][i];
        }
    }
    for(j=0;j<n;j++){
        if(a[j][i]==maxi){
            best[j+1]++;
        }
    }
}
for(i=1;i<=n;i++){
    if(best[i]>0){
        sum++;
    }
}
cout<<sum;
return 0;
}




