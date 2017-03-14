#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
long long n,a,b,i,j,demo,rep;
cin>>n>>a>>b;
long long chair[a][b],cou=1;
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        chair[i][j] = 0;
    }
}
if(n%2==0){
    demo = n/2;
    rep = n/2;
}
else{
    demo = n/2 + 1;
    rep = n/2;
}
if((a*b)<n){
    cout<<-1;
    exit(0);
}
for(i=0;i<a;i++){
    if(i%2==0){
        for(j=0;j<b;j++){
            chair[i][j] = cou;
            cou++;
            if(cou>n){
                break;
            }
        }
    }
    else{
        for(j=b-1;j>=0;j--){
            chair[i][j] = cou;
            cou++;
            if(cou>n){
                break;
            }
        }
    }
    if(cou>n){
        break;
    }
}
for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        cout<<chair[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}




