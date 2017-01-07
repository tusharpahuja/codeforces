#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
int n,m,i,j;
cin>>n>>m;
long long a[n],b[m],sum=0;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<m;i++){
    cin>>b[i];
}
sort(a,a+n);
sort(b,b+m);
i=0;j=0;
while(i<n && j<m){
    if(a[i]<=b[j]){
        i++;j++;
    }
    else{
        j++;
    }
}
cout<<(n-i);
return 0;
}

