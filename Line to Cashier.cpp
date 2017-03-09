#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
int n,i,j;
cin>>n;
int que[n],prod[n][100],time[n],sum[n],cou=0,mini;
for(i=0;i<n;i++){
    cin>>que[i];
}
for(i=0;i<n;i++){
    cou=0;
    for(j=0;j<que[i];j++){
        cin>>prod[i][j];
        cou += prod[i][j];
    }
    sum[i]=cou;
}
for(i=0;i<n;i++){
    time[i] = sum[i]*5 + que[i]*15;
}
mini = time[0];
for(i=1;i<n;i++){
    if(time[i]<mini){
        mini = time[i];
    }
}
cout<<mini;
return 0;
}

