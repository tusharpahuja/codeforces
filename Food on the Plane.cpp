#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
long long n,sum=0,len;
string a;
char c;
cin>>a;
len = strlen(a.c_str());
c = a[len-1];
n = atoll((a.substr(0,len-1)).c_str());

if(n==1){
    if(c=='a'){
        sum+=4;
    }
    else if(c=='b'){
        sum+=5;
    }
    else if(c=='c'){
        sum+=6;
    }
    else if(c=='d'){
        sum+=3;
    }
    else if(c=='e'){
        sum+=2;
    }
    else if(c=='f'){
        sum+=1;
    }
}
else if(n==2){
    sum+=7;
    if(c=='a'){
        sum+=4;
    }
    else if(c=='b'){
        sum+=5;
    }
    else if(c=='c'){
        sum+=6;
    }
    else if(c=='d'){
        sum+=3;
    }
    else if(c=='e'){
        sum+=2;
    }
    else if(c=='f'){
        sum+=1;
    }
}
else if(n==3){
    if(c=='a'){
        sum+=4;
    }
    else if(c=='b'){
        sum+=5;
    }
    else if(c=='c'){
        sum+=6;
    }
    else if(c=='d'){
        sum+=3;
    }
    else if(c=='e'){
        sum+=2;
    }
    else if(c=='f'){
        sum+=1;
    }
}
else if(n==4){
    sum+=7;
    if(c=='a'){
        sum+=4;
    }
    else if(c=='b'){
        sum+=5;
    }
    else if(c=='c'){
        sum+=6;
    }
    else if(c=='d'){
        sum+=3;
    }
    else if(c=='e'){
        sum+=2;
    }
    else if(c=='f'){
        sum+=1;
    }
}
else{
    if(n%4==1){
        sum+=(n/4)*16;
        if(c=='a'){
            sum+=4;
        }
        else if(c=='b'){
            sum+=5;
        }
        else if(c=='c'){
            sum+=6;
        }
        else if(c=='d'){
            sum+=3;
        }
        else if(c=='e'){
            sum+=2;
        }
        else if(c=='f'){
            sum+=1;
        }
    }
    else if(n%4==2){
        sum+=(n/4)*16;
        sum+=7;
        if(c=='a'){
            sum+=4;
        }
        else if(c=='b'){
            sum+=5;
        }
        else if(c=='c'){
            sum+=6;
        }
        else if(c=='d'){
            sum+=3;
        }
        else if(c=='e'){
            sum+=2;
        }
        else if(c=='f'){
            sum+=1;
        }
    }
    else if(n%4==3){
        sum+=(n/4)*16;
        if(c=='a'){
            sum+=4;
        }
        else if(c=='b'){
            sum+=5;
        }
        else if(c=='c'){
            sum+=6;
        }
        else if(c=='d'){
            sum+=3;
        }
        else if(c=='e'){
            sum+=2;
        }
        else if(c=='f'){
            sum+=1;
        }
    }
    else if(n%4==0){
        sum+=((n/4)-1)*16;
        sum+=7;
        if(c=='a'){
            sum+=4;
        }
        else if(c=='b'){
            sum+=5;
        }
        else if(c=='c'){
            sum+=6;
        }
        else if(c=='d'){
            sum+=3;
        }
        else if(c=='e'){
            sum+=2;
        }
        else if(c=='f'){
            sum+=1;
        }
    }
}
cout<<sum;
return 0;
}
