#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
int n,i,pc=0,nc=0,sp=0,sn=0,sumi=0;
cin>>n;
int t[n],sign[n],;
for(i=0;i<n;i++){
    cin>>t[i];
    sumi += t[i];
    sign[i]=0;
}

for(i=0;i<n;i++){
    if(t[i]>=0){
        pc++;
        sp += t[i];
    }
    else{
        nc++;
        sign[i] = 1;
        sn += t[i];
    }
}
if(pc==n){
    cout<<sp;
}
else if(nc==n){
    cout<<0;
}
for(i=0;i<n;i++){

}
return 0;
}





