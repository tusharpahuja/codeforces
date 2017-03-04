#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long n,m,i,j,c=0;
cin>>n>>m;
long long a1[6],a2[6];
for(i=0;i<=4;i++){
    a1[i]=0;
    a2[i]=0;
}
for(i=1;i<=n;i++){
    a1[i%5]++;
}
for(i=1;i<=m;i++){
    a2[i%5]++;
}
c += (a1[0]*a2[0]) + (a1[1]*a2[4]) + (a1[4]*a2[1]) + (a1[2]*a2[3]) + (a1[3]*a2[2]);
cout<<c;
return 0;
}






