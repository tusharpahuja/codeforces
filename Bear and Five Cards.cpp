#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
int t1,t2,t3,t4,t5,i,j,maxi=0,sum=0,sumf=0,err=0;
int n[101];
for(i=1;i<=100;i++){
    n[i]=0;
}
cin>>t1>>t2>>t3>>t4>>t5;
sumf+=t1;sumf+=t2;sumf+=t3;sumf+=t4;sumf+=t5;
n[t1]++;n[t2]++;n[t3]++;n[t4]++;n[t5]++;
for(i=100;i>=1;i--){
    if(n[i]!=0){
        if(n[i]==2){
            sum = n[i]*i;
            if(sum>maxi){
                maxi = sum;
            }
        }
        else if(n[i]>2){
            sum = i*3;
            if(sum>maxi){
                maxi = sum;
            }
        }
    }
}
cout<<(sumf-maxi);
return 0;
}
