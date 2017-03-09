#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

long long pos(long long d[],long long a[],long long l,long long h,long long t){
    long long i,m,l1,l2;
    m = (l+h)/2;
    l1 = d[m]-a[m];
    l2 = d[m];
    if(t<=l1){
        return pos(d,a,l,m-1,t);
    }
    else if((t>l1 && t<=l2)){
        return (m+1);
    }
    else{
        return pos(d,a,m+1,h,t);
    }
}

int main(){
long long n,i,m,j;
cin>>n;
long long a[n],d[n];
for(i=0;i<n;i++){
    cin>>a[i];
    if(i==0){
        d[i]=a[i];
    }
    else{
        d[i] = d[i-1]+a[i];
    }
}
cin>>m;
long long q[m];
for(i=0;i<m;i++){
    cin>>q[i];
    cout<<(pos(d,a,0,n-1,q[i]))<<endl;
}


return 0;
}






