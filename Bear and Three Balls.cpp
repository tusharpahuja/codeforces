#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
long long n,i;
cin>>n;
long long a[n],dif[1001],maxi=0;
memset(dif,0,sizeof(dif));
for(i=0;i<n;i++){
    cin>>a[i];
    dif[a[i]]++;
    if(a[i]>maxi){
        maxi = a[i];
    }
}
for(i=1;i<=maxi-2;i++){
    if((dif[i]>0)&&(dif[i+1]>0)&&(dif[i+2]>0)){
        cout<<"YES";
        exit(0);
    }
}
cout<<"NO";
return 0;
}






