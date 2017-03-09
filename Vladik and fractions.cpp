#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
#include<string.h>
using namespace std;

int main(){
long long n,x,y,z;
cin>>n;
if(n==1){
    cout<<-1;
    exit(0);
}
x = n;
y = (n+1);
z = n*(n+1);
if((x==y)||(y==z)||(z==x)){
    cout<<-1;
    exit(0);
}
cout<<(x)<<" "<<(y)<<" "<<(z);
return 0;
}
