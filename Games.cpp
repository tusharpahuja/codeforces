#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
int n,i,j,counti=0;
cin>>n;
int h[n],a[n];
for(i=0;i<n;i++){
    cin>>h[i]>>a[i];
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i!=j){
            if(h[i]==a[j]){
                counti++;
            }
        }
    }
}
cout<<counti;
return 0;
}






