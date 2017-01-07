#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){
vector<int> v;
int i,x,y;
for(i=0;i<10;i++){
    cout<<i<<i<<i<<i<<endl;
    flush(cout);
    cin>>x>>y;
    if(x || y){
        v.push_back(i);
    }
}
do{
    cout<<v[0]<<v[1]<<v[2]<<v[3]<<endl;
    flush(cout);
    cin>>x>>y;
    if(x==4){
        break;
    }
}while(next_permutation(v.begin(),v.end()));
return 0;
}




