#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main(){
string s,t;
int l1,l2,k,i,j,co=0,t1=0;
cin>>s>>t;
int or1[27],n[27],d[27];
vector<char> v1,v2;
vector<char>::iterator it1,it2;
l1=strlen(s.c_str());
l2=strlen(t.c_str());
if(strcmp(s.c_str(),t.c_str())==0){
    cout<<0;
    exit(0);
}
for(i=1;i<=26;i++){
    or1[i]=0;
    n[i]=0;
    d[i]=0;
}
for(i=0;i<l1;i++){
    or1[int(s[i])-96]++;
    n[int(t[i])-96]++;
}
for(i=0;i<l1;i++){
    t1=0;
    if(s[i]!=t[i]){
        for(j=0;j<l1;j++){
            if((s[j]==s[i])&&(t[j]==t[i])&&(d[int(t[i])-96]==0)&&(d[int(s[i])-96]==0)){
                t1++;
            }
            else if((d[int(t[i])-96]==1)&&(d[int(s[i])-96]==1)){
                it1 = find(v1.begin(),v1.end(),s[i]);
                it2 = find(v2.begin(),v2.end(),s[i]);
                if((v2[it1-v1.begin()]==t[i])||(v1[it2-v2.begin()]==t[i])){
                    continue;
                }
                else{
                    cout<<-1;
                    exit(0);
                }
            }
            else if(((d[int(s[i])-96]==1)&&(d[int(t[i])-96]!=1))||((d[int(s[i])-96]==1)&&(d[int(t[i])-96]!=1))){
                cout<<-1;
                exit(0);
            }
            else if(((s[j]==s[i])&&(t[j]!=t[i]))||((s[j]!=s[i])&&(t[j]==t[i]))){
                cout<<-1;
                exit(0);
            }
        }
        if((t1==or1[int(s[i])-96])&&(t1==n[int(t[i])-96])&&(d[int(s[i])-96]==0)&&(d[int(t[i])-96]==0)){
            co++;
            v1.push_back(s[i]);
            v2.push_back(t[i]);
            d[int(s[i])-96]=1;
            d[int(t[i])-96]=1;
        }
    }
}
cout<<co<<endl;
for(i=0;i<co;i++){
    cout<<v1[i]<<" "<<v2[i]<<endl;
}
return 0;
}
