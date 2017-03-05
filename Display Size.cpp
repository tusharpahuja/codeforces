#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long n,i,b,c,prime=0,temp;
long long a[15];
cin>>n;
for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            prime = 1;
        }
    }
if(prime==0){
    cout<<1<<" "<<n;
    exit(0);
}
for(i=1;i<=sqrt(n);i++){
    if(n%i==0){
        temp = i;
    }
}
b = n/temp;
cout<<temp<<" "<<b;
/*if(n%2==0){
    b = sqrt(n);
    c = n/b;
    cout<<b<<" "<<c;
}
else{
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            prime = 1;
        }
    }
    if(prime==0){
        cout<<1<<" "<<n;
    }
    else{
        b = sqrt(n);
        c = n/b;
        cout<<b<<" "<<c;
    }
}*/
return 0;
}






