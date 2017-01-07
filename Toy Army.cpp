#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
long long n,k,rem;
cin>>n>>k;
rem = n%k; //Take the modulo
cout<<(n+(k-rem));
return 0;
}

