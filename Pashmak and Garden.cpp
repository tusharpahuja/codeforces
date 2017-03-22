#include<iostream>
using namespace std;
#include<stdlib.h>
#include<math.h>
int main(){
int x1,x2,x3,x4,y1,y2,y3,y4,d,d1,d2;
cin>>x1>>y1>>x2>>y2;
if(((x1==x2)&&(y1!=y2))){
    if(y1>y2){
        d=y1-y2;
        cout<<x2+d<<' '<<y2<<' '<<x2+d<<' '<<y1;
    }
    else{
        d=y2-y1;
        cout<<x1+d<<' '<<y1<<' '<<x1+d<<' '<<y2;
    }
}
else if(((y1==y2)&&(x1!=x2))){
    if(x1>x2){
        d=x1-x2;
        cout<<x2<<' '<<y2+d<<' '<<x1<<' '<<y1+d;
    }
    else{
        d=x2-x1;
        cout<<x1<<' '<<y1+d<<' '<<x2<<' '<<y2+d;
    }
}
else if((x1!=x2)&&(y1!=y2)){
    d1=x2-x1;
    d2=y2-y1;
    if(-1*d1==d2){
        if(x2>x1){
            cout<<x1<<' '<<y2<<' '<<x2<<' '<<y1;
        }
        else{
            cout<<x2<<' '<<y1<<' '<<x1<<' '<<y2;
        }
    }
    else if(d1==d2){
        if(x2>x1){
            cout<<x1<<' '<<y1+abs(d1)<<' '<<x2<<' '<<y2-abs(d2);
        }
        else{
            cout<<x2<<' '<<y2+abs(d2)<<' '<<x1<<' '<<y1-abs(d1);
        }
    }
    else{
        cout<<-1;
    }
}
else{
    cout<<-1;
}
return 0;
}
