#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main(){
string a,b,c;
int l1,l2,i;
cin>>a>>b;
reverse(b.begin(),b.end());
if(strcmp(a.c_str(),b.c_str())==0){
    cout<<"YES";
}
else{
    cout<<"NO";
}

return 0;
}







