#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long N,i,j,co=0,prev;
cin>>N;
long long a[N],b[N];
for(i=0;i<N;i++){
    cin>>b[i];
    a[i] = 0;
}
prev = 0;
for(i=0;i<N;i++){
    co += abs(b[i]- prev);
    prev = b[i];
}
cout<<co;
return 0;
}






