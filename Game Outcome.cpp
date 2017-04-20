#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
long long n,i,j,sum=0,total=0;
cin>>n;
long long a[n][n],row[n],col[n];
for(i=0;i<n;i++){
    sum = 0;
    for(j=0;j<n;j++){
        cin>>a[i][j];
        sum += a[i][j];
    }
    row[i] = sum;
}
for(i=0;i<n;i++){
    sum = 0;
    for(j=0;j<n;j++){
        sum += a[j][i];
    }
    col[i] = sum;
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(row[i]<col[j]){
            total++;
        }
    }
}
cout<<total;
return 0;
}
