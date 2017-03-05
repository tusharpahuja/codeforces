#include<iostream>
using namespace std;
#include<stdlib.h>
#include<vector>
#include<string.h>

int main(){
string sat = "CODEFORCES";
string a,tmp;
long long l,i,j,k,s,cu=0;
cin>>a;
l = strlen(a.c_str());
s=0;
i=0;
for(i=0;i<l;i++){
    for(j=i;j<l;j++){
        tmp ="";
        for(k=0;k<i;k++){
            tmp.push_back(a[k]);
        }
        for(k=j+1;k<l;k++){
            tmp.push_back(a[k]);
        }
        if(tmp==sat){
            cout<<"YES";
            exit(0);
        }
    }
}
cout<<"NO";

/*while((s<10)&&(i<l)){
    if(a[i]==sat[s]){
        s++;
        a[i] = 'X';
        if(cu!=0){
            v.push_back(cu);
            cu = 0;
        }
    }
    else{
        cu++;
    }
    i++;
}*/

return 0;
}
