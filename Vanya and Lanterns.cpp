#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
long double n,l,i,s,e,ma=0;
cin>>n>>l;
vector<long double> v;
long double a;
for(i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}
sort(v.begin(),v.end());
s = 0;
e = l;
for(i=1;i<n;i++){
    if((v[i]-v[i-1])>ma){
        ma = (v[i]-v[i-1]);
    }
}
ma = ma/(long double)2;
ma = max(ma,max((v[0]-s),(e-v[n-1])));
cout<<fixed<<setprecision(10)<<ma;
return 0;
}







