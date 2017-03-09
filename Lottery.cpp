#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
long long n,k,i,j,total=0,main,start,th,cou=0;
cin>>n>>k;
main = (n/k);
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n-1;i++){
    th = 1;
    start = a[i];
    if(start!=0){
        a[i] = 0;
        for(j=i+1;j<n;j++){
            if(a[j]==start){
                th++;
                a[j]=0;
            }
        }
    }
    if(th>main){
        cou += (th-main);
    }
}
cout<<cou;
return 0;
}

