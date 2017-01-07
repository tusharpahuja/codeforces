#include<iostream>
#include<vector>
#include<string.h>
#include<math.h>
#include<map>
#include<algorithm>
using namespace std;

int main(){
int d,i,st,j;
cin>>d>>st;
int mint[d],maxt[d],s1=0,s2=0,yo[d],er=0;
for(i=0;i<d;i++){
    cin>>mint[i]>>maxt[i];
    s1 += mint[i];
    s2 += maxt[i];
}
if(st<s1 || st>s2){
    cout<<"NO";
    exit(0);
}
else{
    for(i=0;i<d;i++){
        s1 -= mint[i];
        s2 -= maxt[i];
        er=0;
        for(j=maxt[i];j>=mint[i];j--){
            if(((st-j)<=s2)&&((st-j)>=s1)){
                yo[i] = j;
                st-=j;
                er=1;
                break;
            }
        }
        if(er==0){
            cout<<"NO"<<endl;
            exit(0);
        }
    }
    cout<<"YES"<<endl;
    for(i=0;i<d;i++){
        cout<<yo[i]<<" ";
    }
}

return 0;
}
