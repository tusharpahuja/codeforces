#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

int main(){
int a1,a2,a3,b1,b2,b3,ar1,ar2,ar3,n1,n2,n3,n4,n5,n6,n7,n8;
cin>>a1>>b1;
cin>>a2>>b2;
cin>>a3>>b3;
int val[a1][b1];
memset(val,0,sizeof(val));
ar1 = a1*b1;
ar2 = a2*b2;
ar3 = a3*b3;
if(ar1<(ar2+ar3)){
    cout<<"NO";
    exit(0);
}
n1 = a3 + a2;
n2 = b3 + b2;
n3 = a3 + b2;
n4 = b3 + a2;
if((n1<=a1 && max(b3,b2)<=b1)||(n3<=a1 && max(b3,a2)<=b1)||(n1<=b1 && max(b3,b2)<=a1)||(n3<=b1 && max(b3,a2)<=a1)||(n2<=a1 && max(a3,a2)<=b1)||(n4<=a1 && max(b2,a3)<=b1)||(n2<=b1 && max(a3,a2)<=a1)||(n4<=b1 && max(b2,a3)<=a1)){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}







