#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
string a;
getline(cin,a);
int len = strlen(a.c_str());
int i,j,b[26],counti=0;
for(i=0;i<26;i++){
    b[i] = 0;
}
for(i=1;i<len;i=i+3){
    if((a[i]!='{')&&(a[i]!='}')&&(a[i]!=' ')){
        b[int(a[i])-97] = 1;
    }
}
for(i=0;i<26;i++){
    if(b[i]==1){
        counti++;
    }
}
cout<<counti;
return 0;
}






