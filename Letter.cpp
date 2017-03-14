#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long len,i,up=0,lo=0,ans;
string a;
cin>>a;
len = strlen(a.c_str());
long long upper[len+1],lower[len+1];
upper[0] = 0;
lower[0] = 0;
for(i=0;i<len;i++){
    upper[i+1] = upper[i];
    lower[i+1] = lower[i];
    if((int(a[i]))>=97){
        lower[i+1]++;
    }
    else{
        upper[i+1]++;
    }
}
ans = 1e9;
for(i=0;i<=len;i++){
    lo = lower[i];
    up = upper[len]-upper[i];
    ans = min(ans,lo+up);
}
cout<<ans;
return 0;
}










