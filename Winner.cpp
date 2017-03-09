#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
int n,i,it,maxi;
cin>>n;
string a;
long long temp,m=-2000,co=0;
vector<string> name,f1;
vector<string> w;
vector<int> score,f2;
map<string,int> m1;
map<string,int>::iterator it1;
for(i=0;i<n;i++){
    cin>>a;
    cin>>temp;
    it = find(name.begin(),name.end(),a) - name.begin();
    if(it>=name.size()){
        name.push_back(a);
        score.push_back(temp);
    }
    else{
        score[it] += temp;
    }
    maxi = max_element(score.begin(),score.end()) - score.begin();
    f1.push_back(name[maxi]);
    f2.push_back(score[maxi]);
}
for(i=0;i<n;i++){
    if(score[i]==score[maxi]){
        co++;
        w.push_back(name[i]);
    }
}
if(co==1){
    cout<<name[maxi];
    exit(0);
}
for(i=0;i<n;i++){
    if(f2[i]>=f2[n-1]){
        it = find(w.begin(),w.end(),f1[i]) - w.begin();
        if(it<w.size()){
            cout<<f1[i];
            exit(0);
        }
    }
}
return 0;
}






