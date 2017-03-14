#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<string.h>
using namespace std;

int main(){
int x1,y1,x2,y2,i,st=0,k1,k2;
long double m;
vector<string> v;
string a;
cin>>a;
x1 = int(a[0])-96;
y1 = atoi(a.substr(1,1).c_str());
cin>>a;
x2 = int(a[0])-96;
y2 = atoi(a.substr(1,1).c_str());
//cout<<x1<<" "<<y1<<endl;
//cout<<x2<<" "<<y2<<endl;
if(x1==x2 && y1==y2){
    cout<<0;
    exit(0);
}
if(x1==x2){
    if(y1>y2){
        st += y1-y2;
        cout<<st<<endl;
        for(i=0;i<st;i++){
            cout<<'D'<<endl;
        }
    }
    else{
        st += y2-y1;
        cout<<st<<endl;
        for(i=0;i<st;i++){
            cout<<'U'<<endl;
        }
    }
}
if(y1==y2){
    if(x1>x2){
        st += x1-x2;
        cout<<st<<endl;
        for(i=0;i<st;i++){
            cout<<'L'<<endl;
        }
    }
    else{
        st += x2-x1;
        cout<<st<<endl;
        for(i=0;i<st;i++){
            cout<<'R'<<endl;
        }
    }
}
else{
    k1 = abs(y2-y1);
    k2 = abs(x2-x1);
    //m = (long double)k1/k2;
    while(abs(k1)!=abs(k2)){
        if(k1>k2){
            if(y1>y2){
                y1--;
                st++;
                v.push_back("D");
            }
            else{
                y1++;
                st++;
                v.push_back("U");
            }
        }
        else{
            if(x1>x2){
                x1--;
                st++;
                v.push_back("L");
            }
            else{
                x1++;
                st++;
                v.push_back("R");
            }
        }
        k1 = abs(y2-y1);
        k2 = abs(x2-x1);
    }
    if((x2>x1)&&(y1>y2)){
        st += y1-y2;
        for(i=0;i<((y1-y2));i++){
            v.push_back("RD");
        }
        cout<<st<<endl;
        for(i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    }
    else if((x1>x2)&&(y1>y2)){
        st += y1-y2;
        for(i=0;i<(y1-y2);i++){
            v.push_back("LD");
        }
        cout<<st<<endl;
        for(i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    }
    else if((x1>x2)&&(y2>y1)){
        st += y2-y1;
        for(i=0;i<(y2-y1);i++){
            v.push_back("LU");
        }
        cout<<st<<endl;
        for(i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    }
    else if((x2>x1)&&(y2>y1)){
        st += y2-y1;
        for(i=0;i<(y2-y1);i++){
            v.push_back("RU");
        }
        cout<<st<<endl;
        for(i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    }
}
return 0;
}






