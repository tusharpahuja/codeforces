#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;

int main(){
char a[11],b[11],na[11],nb[11],s1[12];
string abc;
stringstream strstream;
cin>>a>>b;
long long n1,n2,sum,sum1,len1,len2,i,c=0;
n1 = atoll(a);
n2 = atoll(b);
sum = n1+n2;
strstream<<sum;
abc = strstream.str();
len1 = strlen(a);
len2 = strlen(b);
for(i=0;i<len1;i++){
    if(a[i]!='0'){
        na[c]=a[i];
        c++;
    }
}
c=0;
for(i=0;i<len2;i++){
    if(b[i]!='0'){
        nb[c]=b[i];
        c++;
    }
}
c=0;
len2 = strlen(abc.c_str());
for(i=0;i<len2;i++){
    if(abc[i]!='0'){
        s1[c]=abc[i];
        c++;
    }
}
n1 = atoll(na);
n2 = atoll(nb);
sum = atoll(s1);
sum1 = n1+n2;
if(sum==sum1){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}
