#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
string a;
int l,i,s=0,c=0;
cin>>a;
l = strlen(a.c_str());
if(l<5){
    cout<<"NO";
    exit(0);
}
while(s<l){
    if(c==0){
        if(a[s]=='h'){
            c++;
        }
    }
    else if(c==1){
        if(a[s]=='e'){
            c++;
        }
    }
    else if(c==2){
        if(a[s]=='l'){
            c++;
        }
    }
    else if(c==3){
        if(a[s]=='l'){
            c++;
        }
    }
    else if(c==4){
        if(a[s]=='o'){
            c++;
            break;
        }
    }
    s++;
}
if(c<5){
    cout<<"NO";
}
else{
    cout<<"YES";
}
return 0;
}






