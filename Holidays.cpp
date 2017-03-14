#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<vector>
using namespace std;

int main(){
long long n,i,t;
cin>>n;
if(n%7==0){
    cout<<2*(n/7)<<" "<<2*(n/7);
    exit(0);
}
else{
    t = n%7;
    //if(n<7){
        if(t==1){
            cout<<2*(n/7)<<" "<<2*(n/7)+1;
        }
        else if(t<=5 && t>1){
            cout<<2*(n/7)<<" "<<2*(n/7)+2;
        }
        else if(t==6){
            cout<<2*(n/7)+1<<" "<<2*(n/7)+2;
        }

        //cout<<2*(n/7)<<" "<<2*(n/7);
    //exit(0);
}
return 0;
}


