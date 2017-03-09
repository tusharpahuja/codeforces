#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
int k,len,i,j,x,start=0;
string a;
cin>>k;
cin>>a;
len = strlen(a.c_str());
vector<char> v;
int al[27][2];
for(i=1;i<=26;i++){
    al[i][0] = 0;
    al[i][1] = 1;
}
for(i=0;i<len;i++){
    al[int(a[i])-96][0]++;
}
for(i=1;i<=26;i++){
    if((al[i][0]>0)){
        if(al[i][0]%k!=0){
            cout<<-1;
            exit(0);
        }
        else{
            al[i][1] = al[i][0]/k;
            for(x=0;x<al[i][1];x++){
                v.push_back(char(i+96));
            }
        }
    }
}
for(j=1;j<k;j++){
    for(i=1;i<=26;i++){
        if((al[i][0]>0)){
            for(x=0;x<al[i][1];x++){
                v.push_back(char(i+96));
            }
        }
    }
}
for(i=0;i<v.size();i++){
    cout<<v[i];
}
return 0;
}






