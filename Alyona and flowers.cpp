#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long n,m,i,j,happ=0,pos=0,neg=0,c=0,poseff=0,negeff=0;
cin>>n>>m;
long long mood[n],sub[m][3];
for(i=0;i<n;i++){
    cin>>mood[i];
}
for(i=0;i<m;i++){
    cin>>sub[i][0]>>sub[i][1];
    sub[i][0] -= 1;
    sub[i][1] -= 1;
}
for(i=0;i<n;i++){
    if(mood[i]>=0){
        pos++;
    }
    else{
        neg++;
    }
}
if(pos==n){
    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<m;j++){
            if((i>=(sub[j][0]))&&(i<=(sub[j][1]))){
                c++;
            }
        }
        happ += c*mood[i];
    }
    cout<<happ;
    exit(0);
}
else if(neg==n){
    cout<<0;
    exit(0);
}
for(i=0;i<m;i++){
    poseff = 0;
    for(j=sub[i][0];j<=sub[i][1];j++){
        poseff += mood[j];
    }
    if(poseff>0){
        sub[i][2] = 1;
    }
    else{
        sub[i][2] = 0;
    }
}
for(i=0;i<n;i++){
    c=0;
    for(j=0;j<m;j++){
        if((i>=(sub[j][0]))&&(i<=(sub[j][1]))&&(sub[j][2]==1)){
            c++;
        }
    }
    happ += c*mood[i];
}
cout<<happ;
return 0;
}
