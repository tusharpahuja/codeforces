#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
long long n,i,mini=100000000000,time;
string a;
cin>>n;
cin>>a;
long long b[n];
for(i=0;i<n;i++){
    cin>>b[i];
}
for(i=0;i<n-1;i++){
    if((a[i]=='R')&&(a[i+1]=='L')){
        time = (b[i+1]-b[i])/2;
        if(time<mini){
            mini = time;
        }
    }
}
if(mini==100000000000){
    cout<<-1;
}
else{
    cout<<mini;
}
return 0;
}





