#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n,i,c,error=0,len,k=0;
bool flag=false;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
cin.ignore();

string s;
while(n--){
    c=0;
    s.clear();
    getline(cin,s);
    len = (s).size();
    for(i=0;i<len;i++){
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='y')){
            c++;
        }
    }
    if(c!=a[k]){
        error=1;
    }
    k++;
}
if(error==1){
    cout<<"NO";
}
else{
    cout<<"YES";
}
return 0;
}
