#include<iostream>
#include<vector>
#include<string.h>
#include<math.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
long long n,d,i,res,jo=0,to=0;
cin>>n>>d;
long long t[n];
for(i=0;i<n;i++){
    cin>>t[i];
    to += t[i];
}
res = n-1;
if(d<(res*10+to)){
    cout<<-1;
    exit(0);
}
cout<<(res*10 + abs(d-(res*10+to)))/5;
return 0;
}
