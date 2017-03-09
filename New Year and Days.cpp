#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
string a;
int b;
getline(cin,a);
if(a[5]=='w'){
    b = atoi(a.substr(0,1).c_str());
    if((b==5)||(b==6)){
        cout<<53;
    }
    else{
        cout<<52;
    }
}
else{
    b = atoi(a.substr(0,2).c_str());
    if(b==31){
        cout<<7;
    }
    else if(b==30){
        cout<<11;
    }
    else{
        cout<<12;
    }
}
return 0;
}

