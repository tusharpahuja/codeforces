#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
bool formed(int total[][1001],int n,int m,int a,int b){
    int i,j,n1,n2;
    n1 = a-1;
    n2 = b-1;
    if((total[n1-1][n2-1]==1)&&(total[n1-1][n2]==1)&&(total[n1][n2-1]==1)&&(total[n1][n2]==1)){
        return true;
    }
    else if((total[n1-1][n2+1]==1)&&(total[n1-1][n2]==1)&&(total[n1][n2+1]==1)&&(total[n1][n2]==1)){
        return true;
    }
    else if((total[n1+1][n2-1]==1)&&(total[n1+1][n2]==1)&&(total[n1][n2-1]==1)&&(total[n1][n2]==1)){
        return true;
    }
    else if((total[n1+1][n2+1]==1)&&(total[n1+1][n2]==1)&&(total[n1][n2+1]==1)&&(total[n1][n2]==1)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
int n,m,k,i,j,a,b,c=0,err=0;
cin>>n>>m>>k;
int total[n][1001];
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        total[i][j]=0;
    }
}
if(k<4){
    cout<<0;
    exit(0);
}
cin>>a>>b;
c++;
total[a-1][b-1]=1;
cin>>a>>b;
c++;
total[a-1][b-1]=1;
cin>>a>>b;
c++;
total[a-1][b-1]=1;
cin>>a>>b;
c++;
total[a-1][b-1]=1;
if((formed(total,n,m,a,b)==true)&&(err==0)){
    err = c;
}
while((c<k)){
    if((formed(total,n,m,a,b)==true)&&(err==0)){
        err = c;
    }
    cin>>a>>b;
    c++;
    total[a-1][b-1]=1;
}
if((formed(total,n,m,a,b)==true)&&(err==0)){
    err = c;
}
cout<<err;

return 0;
}






