#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
int k,i,j,maxi=0,b;
cin>>k;
int total[10];
for(i=1;i<=9;i++){
    total[i]=0;
}
string a[4];
for(i=0;i<4;i++){
    cin>>a[i];
    for(j=0;j<4;j++){
        b = atoi(a[i].substr(j,1).c_str());
        total[b]++;
        if(b>maxi){
            maxi = b;
        }
    }
}
for(i=1;i<=maxi;i++){
    if(total[i]>(2*k)){
        cout<<"NO";
        exit(0);
    }
}
cout<<"YES";
return 0;
}






