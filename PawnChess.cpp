#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
int a1=-1,a2=-1,b1=-1,b2=-1;
char chess[8][8],temp[8][8];
int i,j,k;
for(i=0;i<8;i++){
    for(j=0;j<8;j++){
        cin>>chess[i][j];
        temp[i][j]=chess[i][j];
    }
}
i=0;
while((i<8)&&(a1==-1)&&(a2==-1)){
    for(j=0;j<8;j++){
        if(chess[i][j]=='W'){
            a1 = i;
            a2 = j;
            break;
        }
    }
    if(a2!=-1){
        for(k=0;k<a1;k++){
            if(chess[k][a2]=='B'){
                chess[a1][a2]='.';
                a1 = -1;
                a2 = -1;
                break;
            }
        }
    }
    else{
        i++;
    }
}

i=7;
while((i>=0)&&(b1==-1)&&(b2==-1)){
    for(j=0;j<8;j++){
        if(temp[i][j]=='B'){
            b1 = i;
            b2 = j;
            break;
        }
    }
    if(b2!=-1){
        for(k=7;k>b1;k--){
            if(temp[k][b2]=='W'){
                temp[b1][b2]='.';
                b1 = -1;
                b2 = -1;
                break;
            }
        }
    }
    else{
        i--;
    }
}
if(b1==-1){
    cout<<"A";
    exit(0);
}
if(a1==-1){
    cout<<"B";
    exit(0);
}
if(abs(0-a1)>abs(7-b1)){
    cout<<"B";
}
else{
    cout<<"A";
}
return 0;
}





