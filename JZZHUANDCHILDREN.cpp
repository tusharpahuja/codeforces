#include<iostream>
#include<stdlib.h>
using namespace std;

bool greatert(float a[],int n,int m){
    int i;
    for(i=0;i<n;i++){
        if(a[i]>m){
            return true;
        }
    }
    return false;
}
int maximum(float a[],int n){
    int i,key;
    for(i=0;i<n;i++){
        if(a[i]>0){
            key = i+1;
        }
    }
    return key;
}

int main(){
int n,m,i,maxi=0,key;
bool left=true;
cin>>n>>m;
float a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
while(left){
    if(greatert(a,n,m)){
        for(i=0;i<n;i++){
            a[i]=a[i]-m;
        }
    }
    else{
        key = maximum(a,n);
        left = false;
    }
}
cout<<key;
return 0;
}
