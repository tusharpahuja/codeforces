#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
//long long
int main(){
long long n,i,c=0,m=0;
cin>>n;
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
i=1;
c=1;
while(i<n){
    if(a[i]>=a[i-1]){
        i++;
        c++;
    }
    else{
        if(c>m){
            m = c;
        }
        c=1;
        i++;
    }
}
if(c>m){
    m=c;
}
cout<<m;
return 0;
}






