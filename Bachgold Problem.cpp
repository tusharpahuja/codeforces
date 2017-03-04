#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main(){
long long N,i,a,b;
cin>>N;
if((N==2)||(N==3)){
    cout<<1<<endl<<N;
    exit(0);
}
if(N%2==0){
    a = N/2;
    cout<<a<<endl;
    for(i=0;i<a;i++){
        cout<<2<<" ";
    }
}
else{
    a = (N-3)/2;
    cout<<a+1<<endl;
    for(i=0;i<a;i++){
        cout<<2<<" ";
    }
    cout<<3;
}
return 0;
}






