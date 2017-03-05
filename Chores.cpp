#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
int n,a,b,i,start=0;
cin>>n>>a>>b;
long long h[n];
for(i=0;i<n;i++){
    cin>>h[i];
}
sort(h,h+n);
while(b--){
    start++;
}
cout<<(h[start]-h[start-1]);
return 0;
}









