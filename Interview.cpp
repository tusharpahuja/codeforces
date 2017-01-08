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
long long n,i,s1,s2,val,ma=0,y1,y2;
cin>>n;
long long a[n],b[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    cin>>b[i];
}
y1 = a[0];
y2 = b[0];
val = y1 + y2;
if(val>ma){
    ma = val;
}
s1 = 0;
s2 = 1;
while(s2<n){
    y1 = y1|a[s2];
    y2 = y2|b[s2];
    if((y1+y2)>ma){
        ma = y1+y2;
    }
    s2++;
}

y1 = a[n-1];
y2 = b[n-1];
val = y1 + y2;
if(val>ma){
    ma = val;
}
s1 = n-1;
s2 = n-2;
while(s2>=0){
    y1 = y1|a[s2];
    y2 = y2|b[s2];
    if((y1+y2)>ma){
        ma = y1+y2;
    }
    s2--;
}
cout<<ma;
return 0;
}







