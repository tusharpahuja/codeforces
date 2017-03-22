#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
string ar;
long long len,i,B=0,u=0,l=0,b=0,a=0,s=0,r=0;
cin>>ar;
len = strlen(ar.c_str());
for(i=0;i<len;i++){
    if(ar[i]=='B'){
        B++;
    }
    else if(ar[i]=='u'){
        u++;
    }
    else if(ar[i]=='l'){
        l++;
    }
    else if(ar[i]=='b'){
        b++;
    }
    else if(ar[i]=='a'){
        a++;
    }
    else if(ar[i]=='s'){
        s++;
    }
    else if(ar[i]=='r'){
        r++;
    }
}
cout<<(min(B,min(u/2,min(l,min(b,min(a/2,min(s,r)))))));
return 0;
}
