#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int n,i,c=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
if(n==1){
    if(a[0]==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
else{
    for(i=0;i<n;i++){
        if(a[i]==0){
            c++;
        }
    }
    if(c==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

return 0;
}
