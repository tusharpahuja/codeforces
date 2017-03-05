#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<sstream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int n,a,b,m,i;
cin>>n>>m;
int arr[m][2],v[n],cou=m,ind=0,done[n];
vector<int> vec;
vector<int>::iterator it;
int teams[(n/3)][3];
for(i=0;i<(n/3);i++){
    teams[i][0] = -1;
    teams[i][1] = -1;
    teams[i][2] = -1;
}
for(i=1;i<=n;i++){
    vec.push_back(i);
}
for(i=1;i<=n;i++){
    done[i] = -1;
}
for(i=0;i<m;i++){
    cin>>arr[i][0]>>arr[i][1];
}
while(cou!=0){
    a = arr[m-cou][0];
    b = arr[m-cou][1];
    if((done[a]==-1)&&(done[b]==-1)){
        teams[ind][0] = a;
        teams[ind][1] = b;
        done[a] = ind;
        done[b] = ind;
        if((ind)>=(n/3)){
            cout<<-1;
            exit(0);
        }
        it = find(vec.begin(),vec.end(),a);
        vec.erase(it);
        it = find(vec.begin(),vec.end(),b);
        vec.erase(it);
        ind++;
    }
    else if((done[a]!=-1)&&(done[b]==-1)){
        if(teams[done[a]][2]!=-1){
            cout<<-1;
            exit(0);
        }
        teams[done[a]][2] = b;
        done[b] = done[a];
        it = find(vec.begin(),vec.end(),b);
        vec.erase(it);
    }
    else if((done[a]==-1)&&(done[b]!=-1)){
        if(teams[done[b]][2]!=-1){
            cout<<-1;
            exit(0);
        }
        teams[done[b]][2] = a;
        done[a] = done[b];
        it = find(vec.begin(),vec.end(),a);
        vec.erase(it);
    }
    else if((done[a]!=-1)&&(done[b]!=-1)){
        if(done[a]!=done[b]){
            cout<<-1;
            exit(0);
        }
    }
    cou--;
}
for(i=0;i<(n/3);i++){
    if(teams[i][0]==-1){
        teams[i][0] = vec.front();
        vec.erase(vec.begin());
        teams[i][1] = vec.front();
        vec.erase(vec.begin());
        teams[i][2] = vec.front();
        vec.erase(vec.begin());
    }
    else{
        if(teams[i][2]==-1){
            teams[i][2] = vec.front();
            vec.erase(vec.begin());
        }
    }

}
for(i=0;i<(n/3);i++){
    if((teams[i][0]==-1)||(teams[i][1]==-1)||(teams[i][2]==-1)){
        cout<<-1;
        exit(0);
    }
    cout<<teams[i][0]<<" "<<teams[i][1]<<" "<<teams[i][2]<<endl;
}
return 0;
}
