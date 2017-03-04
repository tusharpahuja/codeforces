#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
int n,diff,a=10;
cin>>n;
diff = abs(a-n);
if(n<10){
    cout<<0;
    exit(0);
}
if(n==10){
    cout<<0;
    exit(0);
}
if((diff>=2)&&(diff<=9)){
    cout<<4;
}
else{
    if(diff==10){
        cout<<15;
    }
    else if(diff==11){
        cout<<4;
    }
    else if(diff==1){
        cout<<4;
    }
    else{
        cout<<0;
    }
}
return 0;
}





