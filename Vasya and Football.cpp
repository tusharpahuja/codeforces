#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
char home[30],away[30];
cin>>home>>away;
int n,yellh[100],yella[100],time[100],plch[100],plca[100];
cin>>n;
char place[n],card[n];
int t[n],m[n],i,j;
for(i=0;i<100;i++){
    yellh[i]=0;
    yella[i]=0;
    time[i]=0;
    plch[i]=0;
    plca[i]=0;
}
for(i=0;i<n;i++){
    cin>>t[i]>>place[i]>>m[i]>>card[i];
    if(card[i]=='r'){
        if(place[i]=='h'){
            yellh[m[i]]=2;
        }
        else{
            yella[m[i]]=2;
        }
        time[t[i]]=1;
    }
    else{
        if(place[i]=='h'){
            yellh[m[i]]++;
            if(yellh[m[i]]>=2){
                time[t[i]]=1;
            }
        }
        else{
            yella[m[i]]++;
            if(yella[m[i]]>=2){
                time[t[i]]=1;
            }
        }
    }
}
for(i=0;i<n;i++){
    if(place[i]=='h'){
        if((yellh[m[i]]>=2)&&(time[t[i]]==1)&&(plch[m[i]]!=1)){
            cout<<home<<" "<<m[i]<<" "<<t[i]<<endl;
            plch[m[i]]=1;
        }
    }
    else{
        if((yella[m[i]]>=2)&&(time[t[i]]==1)&&(plca[m[i]]!=1)){
            cout<<away<<" "<<m[i]<<" "<<t[i]<<endl;
            plca[m[i]]=1;
        }
    }
}
return 0;
}





