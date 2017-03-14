#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<vector>
using namespace std;
int main(){
long long t,n,i,s;
cin>>n;
t = n;
vector<long long> v;
while(t>0){
    v.push_back(1);
    t--;
    if(v.size()>1){
        //cout<<v[0]<<" "<<v[1]<<"_____"<<endl;
        s = v.size()-1;
        //cout<<s<<endl;
        while(s>0){
            if(v[s-1]==v[s]){
                v[s-1]++;
                s--;
                if(s==v.size()-2){
                    v.pop_back();
                }
                else{
                    vector<long long>::iterator it;
                    *it = v[s+1];
                    v.erase(it);
                }
                //cout<<v[s]<<endl;
            }
            else{
                break;
            }
            //cout<<s<<endl;
        }
    }
    //cout<<t<<" "<<s<<endl;
    //t--;
}
for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}
