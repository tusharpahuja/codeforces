#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int n,dis=0,k=0;
bool flag = true;
cin>>n;
char a[n];
cin>>a;
int b[n],c[n],i;
for(i=0;i<n;i++){
    cin>>b[i];
    c[i]=0;
}
while(flag){
    while((0<=k)&&(k<n)){
        if(a[k]=='>'){
            if(c[k]>2){
                cout<<"INFINITE";
                exit(0);
            }
            c[k]++;
            k += b[k];
        }
        else if(a[k]=='<'){
            if(c[k]>2){
                cout<<"INFINITE";
                exit(0);
            }
            c[k]++;
            k -= b[k];
        }
    }
    cout<<"FINITE";
    exit(0);
}
return 0;
}
