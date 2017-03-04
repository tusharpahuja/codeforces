#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
long long n,i,sa=0,sd=0;
string a;
cin>>n;
cin>>a;
for(i=0;i<n;i++){
    if(a[i]=='A'){
        sa++;
    }
    else{
        sd++;
    }
}
if(sa>sd){
    cout<<"Anton";
}
else if(sd>sa){
    cout<<"Danik";
}
else{
    cout<<"Friendship";
}
return 0;
}






