#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
char a[2];
cin>>a;
if((('b'<=a[0])&&(a[0]<='g'))&&(('2'<=a[1])&&(a[1]<='7'))){
    cout<<8;
}
else if((('b'<=a[0])&&(a[0]<='g'))&&((a[1]=='1')||(a[1]=='8'))){
    cout<<5;
}
else if(((((a[0]=='a')||(a[0]=='h')))&&((a[1]=='1')||(a[1]=='8')))){
    cout<<3;
}
else if((('2'<=a[1])&&(a[1]<='7'))&&((a[0]=='a')||(a[0]=='h'))){
    cout<<5;
}
return 0;
}
