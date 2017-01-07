#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int n,m,k,i,sum=0,first=0,sec=0;
cin>>n>>m>>k;
first=m;
sec=(m+k);
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    if(a[i]==1){
        if(first>0){
            first--;
            sec--;
        }
        else{
            sum++;
        }
    }
    else{
        if((sec>0)&&(k>0)){
            sec--;
            k--;
        }
        else if((sec>0)&&(first>0)){
            sec--;
            first--;
        }
        else{
            sum++;
        }
    }
}
cout<<sum;
return 0;
}
