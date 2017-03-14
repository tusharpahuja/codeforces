#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

long long solve(long long x,long long n){
    if(x>n){
        return 0;
    }
    else{
        return 1 + solve(10*x,n) + solve(10*x + 1,n);
    }
}
int main(){
long long n,ten,one;
cin>>n;
cout<<solve(1,n);
return 0;
}






