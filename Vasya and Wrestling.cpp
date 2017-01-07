#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
long long n,a,i,j,k1=0,k2=0,sum1=0,sum2=0,last=0;
cin>>n;
long long f[100000],s[100000];
for(i=0;i<n;i++){
    cin>>a;
    if(a>0){
        f[k1] = a;
        sum1 += a;
        k1++;
        last = 0;
    }
    else{
        s[k2] = abs(a);
        sum2 += abs(a);
        k2++;
        last = 1;
    }
}

if(sum1>sum2){
    cout<<"first";
}
else if(sum1<sum2){
    cout<<"second";
}
else{
    if(k1>k2){
        for(i=0;i<k2;i++){
            if(f[i]>s[i]){
                cout<<"first";
                exit(0);
            }
            else if(s[i]>f[i]){
                cout<<"second";
                exit(0);
            }
        }
    }
    else{
        for(i=0;i<k1;i++){
            if(f[i]>s[i]){
                cout<<"first";
                exit(0);
            }
            else if(s[i]>f[i]){
                cout<<"second";
                exit(0);
            }
        }
    }
    if(last == 0){
        cout<<"first";
    }
    else{
        cout<<"second";
    }
}

return 0;
}
