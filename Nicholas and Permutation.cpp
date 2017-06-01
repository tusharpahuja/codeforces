#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int findpos(int a[],int k,int n){
    int i;
    for(i=0;i<n;i++){
        if(k==a[i]){
            return i;
        }
    }
}

int maxi(int a[]){
    int i,m=0;
    for(i=0;i<4;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}

int main(){
int n,i,pos1,pos2,dis[4],maax;
cin>>n;
int a[n],temp[n];
for(i=0;i<n;i++){
    cin>>a[i];
    temp[i]=a[i];
}
pos1=findpos(a,1,n);
pos2=findpos(a,n,n);

dis[0] = abs(pos1-0);
dis[1] = abs(n-1-pos1);
dis[2] = abs(pos2-0);
dis[3] = abs(n-1-pos2);

cout<<maxi(dis);
return 0;
}
