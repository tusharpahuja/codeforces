#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
string a,b;
int l1,l2,i;
getline(cin,a);
getline(cin,b);
l1 = strlen(a.c_str());
l2 = strlen(b.c_str());
int alp1[71],alp2[71];
memset(alp1,0,sizeof(alp1));
memset(alp2,0,sizeof(alp2));
for(i=0;i<l1;i++){
    if(a[i]!=' ') alp1[int(a[i])-64]++;
}
for(i=0;i<l2;i++){
    if(b[i]!=' ') alp2[int(b[i])-64]++;
}
for(i=1;i<=70;i++){
    if(alp2[i]>alp1[i]){
        cout<<"NO";
        exit(0);
    }
}
cout<<"YES";
return 0;
}






