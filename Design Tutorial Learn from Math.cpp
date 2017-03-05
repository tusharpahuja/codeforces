#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
char n[8];
long long len,n1;
cin>>n;
len = strlen(n);
n1 = atoll(n);
if(n1%2==0){
    cout<<4<<" "<<(n1-4);
}
else{
    if(n[len-1]=='1'){
        cout<<6<<" "<<(n1-6);
    }
    else if(n[len-1]=='3'){
        if(n1==13){
            cout<<4<<" "<<9;
        }
        else{
            cout<<8<<" "<<(n1-8);
        }
    }
    else if(n[len-1]=='5'){
        if(n1==15){
            cout<<6<<" "<<(n1-6);
        }
        else{
            cout<<15<<" "<<(n1-15);
        }
    }
    else if(n[len-1]=='7'){
        if(n1==17){
            cout<<8<<" "<<9;
        }
        else{
            cout<<12<<" "<<(n1-12);
        }
    }
    else if(n[len-1]=='9'){
        cout<<9<<" "<<(n1-9);
    }
}
return 0;
}





