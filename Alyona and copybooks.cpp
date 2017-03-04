#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
long long n,a,b,c,rem,op1,op2,op3;
cin>>n>>a>>b>>c;
rem = n%4;
if(rem == 0){
    cout<<0;
}
else if(rem == 1){
    op1 = c;
    op2 = b + a;
    op3 = 3*a;
    if((op1<=op2)&&(op1<=op3)){
        cout<<op1;
    }
    else if((op2<=op1)&&(op2<=op3)){
        cout<<op2;
    }
    else if((op3<=op2)&&(op3<=op1)){
        cout<<op3;
    }
}
else if(rem == 2){
    op1 = 2*c;
    op2 = b;
    op3 = 2*a;
    if((op1<=op2)&&(op1<=op3)){
        cout<<op1;
    }
    else if((op2<=op1)&&(op2<=op3)){
        cout<<op2;
    }
    else if((op3<=op2)&&(op3<=op1)){
        cout<<op3;
    }
}
else if(rem == 3){
    op1 = 3*c;
    op2 = b + c;
    op3 = a;
    if((op1<=op2)&&(op1<=op3)){
        cout<<op1;
    }
    else if((op2<=op1)&&(op2<=op3)){
        cout<<op2;
    }
    else if((op3<=op2)&&(op3<=op1)){
        cout<<op3;
    }
}

return 0;
}
