#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
long long x,i,j,t,s=0;
cin>>x;
while(x>0){
    for(j=0;j<32;j++){
        t = 1<<j;
        if(t==x){
            s++;
            x = x-t;
            break;
            //exit(0);
        }
        else if(t>x){
            t = 1<<(j-1);
            s++;
            x = x-t;
            break;
        }
    }
}
cout<<(s+x);
return 0;
}



