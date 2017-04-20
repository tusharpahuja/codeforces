#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
long long n,t;
cin>>n>>t;
long double ans;
ans = n*pow(1.000000011,t);
cout<<scientific<<setprecision(10)<<ans;
return 0;
}
