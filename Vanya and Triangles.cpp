#include<iostream>

using namespace std;

int main(){
int n,i,j,k;
cin>>n;
int p[n][2];
long long t=0;
for(i=0;i<n;i++){
    cin>>p[i][0]>>p[i][1];
}
for(i=0;i<n-2;i++){
    for(j=i+1;j<n-1;j++){
        for(k=j+1;k<n;k++){
            //m = p[i].
            if(((p[i][0]-p[j][0])*(p[i][1]-p[k][1]))!=((p[i][0]-p[k][0])*(p[i][1]-p[j][1]))){
                t++;
            }
        }
    }
}
cout<<t;
return 0;
}
