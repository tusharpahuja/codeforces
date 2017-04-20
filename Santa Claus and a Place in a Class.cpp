#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main(){
long long n,m,k,i,yo,l,r,s;
cin>>n>>m>>k;
yo = 2*m;
l = k/yo;
r = k%yo;
if(r==0){
    cout<<(l)<<" ";
}
else{
    cout<<(l+1)<<" ";
}
if(r==0){
    cout<<m<<" "<<'R';
}
else if(r%2==0){
    cout<<(r/2)<<" ";
    cout<<'R';
}
else{
    cout<<(r/2)+1<<" ";
    cout<<'L';
}
return 0;
}
