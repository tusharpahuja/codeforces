#include<iostream>
using namespace std;
#include<stdlib.h>
int main(){
    int n,k,i,c=0;
    cin>>n>>k;
    int arr[n];
    if(n<k){
        exit(0);
    }
    if(k<1){
        exit(0);
    }
    if(n>=50){
        exit(0);
    }
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if((arr[i]>=arr[k-1])&&(100>=arr[i]>0)&&(arr[i]<=100)){
            c++;
        }
    }
    cout<<c;
return 0;
}
