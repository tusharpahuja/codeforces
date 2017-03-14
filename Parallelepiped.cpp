#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;

int main(){
long long a1,a2,a3,t1,t2,t3,i,d;
cin>>a1>>a2>>a3;
d = sqrt(a1*a2*a3);
cout<<4*(d/a1 + d/a2 + d/a3);
return 0;
}




