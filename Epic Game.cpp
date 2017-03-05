#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int main(){
int a,b,n,i,w=0;
cin>>a>>b>>n;
while(n>0){
    if(w==0){
        n = n - GCD(a,n);
        w = 1;
    }
    else{
        n = n - GCD(b,n);
        w = 0;
    }
}
if(w==0){
    cout<<1;
}
else{
    cout<<0;
}
return 0;
}






