#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long N,i,x1,x2,x3,y1,y2,y3,x4,y4,d1,d2,t=1;
cin>>N;
long long x[N],y[N];
if(N==1){
    cin>>x1>>y1;
    cout<<-1;
}
if(N==2){
    cin>>x1>>y1;
    cin>>x2>>y2;
    if((x1==x2)||(y1==y2)){
        cout<<-1;
    }
    else{
        cout<<(abs(x1-x2)*abs(y1-y2));
    }
}
else if(N==3){
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    if(x1==x2){
        d1 = abs(y1-y2);
    }
    else if(x1==x3){
        d1 = abs(y1-y3);
    }
    else if(x3==x2){
        d1 = abs(y3-y2);
    }
    else{
        d1 = 1;
        t = -1;
    }
    if(y1==y2){
        d2 = abs(x1-x2);
    }
    else if(y1==y3){
        d2 = abs(x1-x3);
    }
    else if(y3==y2){
        d2 = abs(x3-x2);
    }
    else{
        d2 = 1;
        t = -1;
    }
    cout<<(d1*d2*t);
}
else if(N==4){
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
    if(x1==x2){
        d1 = abs(y1-y2);
    }
    else if(x1==x3){
        d1 = abs(y1-y3);
    }
    else if(x1==x4){
        d1 = abs(y1-y4);
    }
    else if(x3==x2){
        d1 = abs(y3-y2);
    }
    else if(x2==x4){
        d1 = abs(y4-y2);
    }
    else if(x3==x4){
        d1 = abs(y4-y3);
    }
    else{
        d1 = 1;
        t = -1;
    }
    if(y1==y2){
        d2 = abs(x1-x2);
    }
    else if(y1==y3){
        d2 = abs(x1-x3);
    }
    else if(y1==y4){
        d2 = abs(x1-x4);
    }
    else if(y3==y2){
        d2 = abs(x3-x2);
    }
    else if(y2==y4){
        d2 = abs(x4-x2);
    }
    else if(y3==y4){
        d2 = abs(x4-x3);
    }
    else{
        d2 = 1;
        t = -1;
    }
    cout<<(d1*d2*t);
}
return 0;
}
