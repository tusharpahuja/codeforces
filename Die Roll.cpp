#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int main(){
int y,w,m,pos;
cin>>y>>w;
if(y>w){
    m = y;
}
else{
    m = w;
}
pos = 6 - m + 1;
cout<<(pos)/GCD(pos,6)<<"/"<<6/GCD(pos,6);
return 0;
}






