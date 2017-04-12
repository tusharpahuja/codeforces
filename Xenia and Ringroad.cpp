#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int k=0;
long long n,i,j,m,location=1,time=0;
cin>>n>>m;
int a[m];
for(i=0;i<m;i++){
    cin>>a[i];
}
while(k!=m){
    if(a[k]>location){
        time = time + a[k]-location;
        location = a[k];
        k++;
    }
    else if(a[k]<location){
        time = time + (n-location+1)+(a[k]-1);
        location = a[k];
        k++;
    }
    else{
        k++;
    }
}
cout<<time;
return 0;
}
