#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

int main(){
int a,b,c,i,n1,n2,n3;
cin>>a>>b>>c;
n1 = a;n2=b;n3=c;
while(true){
    if((2*n1<=b)&&(4*n1<=c)){
        cout<<(7*n1);
        exit(0);
    }
    n1--;
}
return 0;
}






