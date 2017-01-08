#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

int main(){
long long n,k,i,on,tw,po;
cin>>n>>k;
vector<long long> v;
long long dif[n-1],c=0;
for(i=1;i<=n;i++){
    v.push_back(i);
}
on = 1;
tw = n;
po = on;
for(i=0;i<k;i++){
    if(po==on){
        cout<<po<<" ";
        on++;
        po = tw;
    }
    else{
        cout<<po<<" ";
        tw--;
        po = on;
    }
}
if(k%2==0){
    for(i=tw;i>=on;i--){
        cout<<i<<" ";
    }
}
else{
    for(i=on;i<=tw;i++){
        cout<<i<<" ";
    }
}
return 0;
}







