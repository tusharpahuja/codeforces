#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
long long n,i,j,sum=0,mini=100000000000,maxi=0,first,last,prev,zer=0,num=0;
cin>>n;
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    if(a[i]<mini){
        mini = a[i];
    }
}
sum += mini*n;
for(i=0;i<n;i++){
    a[i] = a[i] - mini;
    if(a[i]==0){
        zer++;
    }
}
long long dis[zer];
if(zer==1){
    sum += n-1;
}
else{
    first=0;
    for(i=0;i<n;i++){
        if(a[i]==0){
            prev = i;
            break;
        }
        first++;
    }
    for(i=0;i<zer;i++){
        num=0;
        for(j=prev+1;j<n;j++){
            if(a[j]==0){
                prev = j;
                break;
            }
            num++;
        }
        dis[i] = num;
    }
    dis[zer-1] += first;
    maxi = dis[0];
    for(i=1;i<zer;i++){
        if(dis[i]>maxi){
            maxi = dis[i];
        }
    }
    sum += maxi;
}
cout<<sum;

return 0;
}



