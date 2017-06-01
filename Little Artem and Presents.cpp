#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
long long n,temp1,temp2=0,c=0;
cin>>n;
temp1 = n;
if((n==1)||(n==2)){
    cout<<1;
    exit(0);
}
if(n%3==0){
    cout<<(n/3)*2;
}
else if(n%3==1){
    n=n-1;
    cout<<(((n/3)*2)+1);
}
else{
    n=n-2;
    cout<<(((n/3)*2)+1);
}
return 0;
}
