#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
int n,i,j,k=0,t1=0,t2=0;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n/2;j++){
        cout<<(1+t1)<<" ";
        t1++;
    }
    for(j=1;j<=n/2;j++){
        cout<<((n*n)-t2)<<" ";
        t2++;
    }
    cout<<endl;
}
return 0;
}


/*

4

1 2 15 16

3 4 13 14


5 6 11 12






*/
