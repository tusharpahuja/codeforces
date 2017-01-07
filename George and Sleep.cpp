#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
string s,t;
cin>>s;
cin>>t;
int hour1,mini1,hour2,mini2,newh,newm;
hour1 = atoi(s.substr(0,2).c_str());
mini1 = atoi(s.substr(3,2).c_str());
hour2 = atoi(t.substr(0,2).c_str());
mini2 = atoi(t.substr(3,2).c_str());
if((hour2==0)&&(mini2==0)){
    if(hour1<10){
        cout<<"0"<<hour1<<":";
    }
    else{
        cout<<hour1<<":";
    }

    if(mini1<10){
        cout<<"0"<<mini1;
    }
    else{
        cout<<mini1;
    }
    exit(0);
}
newh = hour1-hour2;
newm = mini1-mini2;
if(newm<0){
    newh--;
    newm += 60;
}
if(newh<0){
    newh += 24;
}
if(newh<10){
    cout<<"0"<<newh<<":";
}
else{
    cout<<newh<<":";
}

if(newm<10){
    cout<<"0"<<newm;
}
else{
    cout<<newm;
}
return 0;
}

