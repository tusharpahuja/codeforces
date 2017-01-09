#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
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
long long n,m,i;
cin>>n>>m;
i= n+1;
while(true){
    if(isprime(i)){
        break;
    }
    i++;
}
if(i==m){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}







