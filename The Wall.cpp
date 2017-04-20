#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

long long GCD(long long a,long long b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

long long LCM(long long a,long long b){
    return (a*b)/GCD(a,b);
}

int main(){
long long x,y,a,b,i,n1;
cin>>x>>y>>a>>b;
n1 = LCM(x,y);
if(a%n1!=0){
    a = a + (n1-(a%n1));
}
b = b - (b%n1);
cout<<((b-a)/n1)+1;

return 0;
}




