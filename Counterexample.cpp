#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

long long GCD(long long a,long long b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int main(){
long long l,r,n1,n2;
cin>>l>>r;
n1 = l%100;
n2 = r%100;
if(abs(r-l)<2){
    cout<<-1;
    exit(0);
}
if(l%2==0){
    cout<<(l)<<" "<<(l+1)<<" "<<(l+2);
}
else{
    if(abs(r-l)>=3){
        cout<<(l+1)<<" "<<(l+2)<<" "<<(l+3);
    }
    else{
        if((GCD(l,l+1)==1)&&(GCD(l+1,l+2)==1)&&(GCD(l,l+2)!=1)){
            cout<<(l)<<" "<<(l+1)<<" "<<(l+2);
        }
        else if((GCD(l,l+2)==1)&&(GCD(l+1,l+2)==1)&&(GCD(l,l+1)!=1)){
            cout<<(l)<<" "<<(l+1)<<" "<<(l+2);
        }
        else if((GCD(l,l+2)==1)&&(GCD(l,l+1)==1)&&(GCD(l+1,l+2)!=1)){
            cout<<(l)<<" "<<(l+1)<<" "<<(l+2);
        }
        else{
            cout<<-1;
        }
    }
}
return 0;
}






