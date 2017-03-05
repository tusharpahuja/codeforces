#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
long long n,i,j,ac=0,fc=0,ic=0;
cin>>n;
char a[n];
cin>>a;
for(i=0;i<n;i++){
    if(a[i]=='A'){
        ac++;
    }
    else if(a[i]=='F'){
        fc++;
    }
    else if(a[i]=='I'){
        ic++;
    }
}
if(ic==0){
    cout<<ac;
}
else if(ic==1){
    cout<<1;
}
else{
    cout<<0;
}


return 0;
}

