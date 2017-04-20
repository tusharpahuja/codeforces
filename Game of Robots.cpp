#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
long long n,k,i,start=0,lo=0,temp=0,en=0,cou=0,diff;
cin>>n>>k;
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
//
//while(cou<k){
//    temp=0;
//    lo=0;
//    for(i=0;i<=en;i++){
//        if(cou==k){
//            break;
//        }
//        lo++;
//        cou++;
//    }
//    en++;
//}


for(i=1;i<=n;i++){
    if((i*(i+1)/2)==k){
        cout<<a[i-1];
        exit(0);
    }
    else if((i*(i+1)/2)>k){
        diff = abs((i*(i-1)/2)-k);
        cout<<a[diff-1];
        exit(0);
    }
}

//cout<<a[lo-1];
return 0;
}

//
//3 3
//1 1 2 1 2 3
//
//a1*n + a2*(n-1) + a3*(n-2)



