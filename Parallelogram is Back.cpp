#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main(){
long long x1,y1,x2,i,y2,x3,y3,k1,k2,cou=0;
long double m1,m2;
vector<long double> x,y;
cin>>x1>>y1;
cin>>x2>>y2;
cin>>x3>>y3;
k1 = (y2-y1);
k2 = (x2-x1);
if(k2==0){
    x.push_back(x3);
    y.push_back(y3+k1);
    x.push_back(x3);
    y.push_back(y3-k1);
}
else if(k1==0){
    x.push_back(x3+k2);
    y.push_back(y3);
    x.push_back(x3-k2);
    y.push_back(y3);
}
else{
    m1 = (y2-y1)/(x2-x1);
    if((k2>0)&&(k1>0)){
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x3+k2);
        y.push_back(y3+k1);
        x.push_back(x3-k2);
        y.push_back(y3-k1);
    }
    else if((k2>0)&&(k1<0)){
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x3-k2);
        y.push_back(y3+k1);
        x.push_back(x3+k2);
        y.push_back(y3-k1);
    }
    else if((k2<0)&&(k1>0)){
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x3-k2);
        y.push_back(y3+k1);
        x.push_back(x3+k2);
        y.push_back(y3-k1);
    }
    else{
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x3-k2);
        y.push_back(y3-k1);
        x.push_back(x3+k2);
        y.push_back(y3+k1);
    }
}
k1 = (y3-y1);
k2 = (x3-x1);
if(k2==0){
    if(k1>0){
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x2);
        y.push_back(y2-k1);
    }
    else{
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x2);
        y.push_back(y2+k1);
    }
}
else if(k1==0){
    if(k2>0){
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x2-k2);
        y.push_back(y2);
    }
    else{
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x2+k2);
        y.push_back(y2);
    }
}
else{
    m2 = (y3-y1)/(x3-x1);
    if((k2>0)&&(k1>0)){
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x2-k2);
        y.push_back(y2-k1);
    }
    else if((k2>0)&&(k1<0)){
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x2-k2);
        y.push_back(y2+k1);
    }
    else if((k2<0)&&(k1>0)){
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x2+k2);
        y.push_back(y2-k1);
    }
    else{
        k1 =abs(k1);
        k2 = abs(k2);
        x.push_back(x2+k2);
        y.push_back(y2+k1);
    }
}
cout<<3<<endl;
for(i=0;i<3;i++){
    cout<<x[i]<<" "<<y[i]<<endl;
}
return 0;
}
