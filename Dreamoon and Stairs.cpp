#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long n,m,i,q,ans,rem;
cin>>n>>m;
if(n<m){
    cout<<-1;
    exit(0);
}
if(n==m){
    cout<<n;
    exit(0);
}
if(n%2==0){
    q = n/2;
    rem = q%m;
    if(rem==0){
        ans = q;
    }
    else{
        ans = q + m-rem;
    }

}
else{
    q = n/2;
    rem = q%m;
    ans = q + m-rem;
}

cout<<ans;
return 0;
}









