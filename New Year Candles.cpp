#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int a,b,cou=0,sum=0;
cin>>a>>b;
while(a){
    if(a>=b){
        sum = sum + b;
        a = a-b;
        a++;
    }
    else{
        sum = sum + (a);
        break;
    }

}
cout<<sum;
return 0;
}
