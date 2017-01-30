#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

bool isprime(long long a){
    long long i;
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
long long n,i;
cin>>n;

    for(i=1;i<=1000;i++){
        if(i!=n){
            if(isprime(i*n + 1)==false){
                cout<<i;
                exit(0);
            }
        }
    }



return 0;
}
