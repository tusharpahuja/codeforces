#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
int n,b,p,i,temp,n1,match,sumb=0,sump=0;
cin>>n>>b>>p;
n1 = n;
while(n!=1){
    for(i=0;i<32;i++){
        temp = 1<<i;
        if(temp>=n){
            match = temp/2;
            sumb = sumb + match*(2*b+1);
            n = n - match;
            break;
        }
    }
}
cout<<sumb<<" "<<(p*n1);
return 0;
}






