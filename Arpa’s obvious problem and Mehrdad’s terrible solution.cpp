#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long n,x,i,j,c=0,a;
long long temp[131072];
cin>>n>>x;
for(i=0;i<131072;i++){
    temp[i]=0;
}
for(i=0;i<n;i++){
    cin>>a;
    c += temp[x^a];
    temp[a]++;
}
cout<<c;

return 0;
}




