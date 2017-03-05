#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long n,m,i,mini=0,maxi=0,qu,res,r;
cin>>n>>m;
    qu = n/m;
    r = (n%m);
    mini += m*qu*(qu-1)/2;
    mini += qu*r;
    qu = n - (m-1);
    maxi = qu*(qu-1)/2;
    cout<<mini<<" "<<maxi;
return 0;
}






