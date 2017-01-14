#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long n,i,s,t;
cin>>n;
s=1;
t=n;
while(s<=n){
    if(s>=t){
        cout<<t;
        exit(0);
    }
    t = t-s;
    s++;
}

return 0;
}
