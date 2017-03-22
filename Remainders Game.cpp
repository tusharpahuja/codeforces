#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long n,k,i;
cin>>n>>k;
long long c[n];
for(i=0;i<n;i++){
    cin>>c[i];
}
for(i=0;i<n;i++){
    if(c[i]==k){
        cout<<"YES";
        exit(0);
    }
}
cout<<"NO";
return 0;
}
