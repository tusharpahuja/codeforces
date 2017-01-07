#include<iostream>
#include<vector>
#include<string.h>
#include<math.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
long long n,w,h,i,k1,k2,k3,j,z,c=0,prev,m=0;
cin>>n>>w>>h;
long long te[n][3];
vector<long long> v,po;
for(i=0;i<n;i++){
    cin>>te[i][0]>>te[i][1];
    te[i][2] = i;
}
for(i=1;i<n;i++){
    k1 = te[i][0];
    k2 = te[i][1];
    k3 = te[i][2];
    j = i-1;
    while(j>=0 && te[j][0]*te[j][1]>k1*k2 && te[j][1]>=k2 && te[j][0]>=k1){
        z = te[j][0];
        te[j][0] = te[j+1][0];
        te[j+1][0] = z;
        z = te[j][1];
        te[j][1] = te[j+1][1];
        te[j+1][1] = z;
        z = te[j][2];
        te[j][2] = te[j+1][2];
        te[j+1][2] = z;
        j--;
    }
    te[j+1][0] = k1;
    te[j+1][1] = k2;
    te[j+1][2] = k3;
}
cout<<"_________________________________"<<endl;
for(i=0;i<n;i++){
    cout<<te[i][0]<<" "<<te[i][1]<<endl;
}

//for(j=0;j<n;j++){
//    v.clear();
//    c=0;
//    if(te[j][0]>w && te[j][1]>h){
//        prev = j;
//        v.push_back(te[j][2]);
//        c++;
//    }
//    else{
//        continue;
//    }
//    for(i=prev+1;i<n;i++){
//        if(te[i][0]>te[prev][0] && te[i][1]>te[prev][1]){
//            prev = i;
//            v.push_back(te[i][2]);
//            c++;
//        }
//    }
//    if(c>m){
//       po.clear();
//        m = c;
//        po = v;
//    }
//}
//cout<<m<<endl;
//for(i=0;i<po.size();i++){
//    cout<<po[i]+1<<" ";
//}
return 0;
}
