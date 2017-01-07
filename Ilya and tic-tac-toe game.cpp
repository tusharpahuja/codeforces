#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
char a[4][4];
int i,j;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        cin>>a[i][j];
    }
}

for(i=0;i<4;i++){
    for(j=0;j<2;j++){
        if(((a[i][j]=='x')&&(a[i][j+1]=='x')&&(a[i][j+2]=='.'))||((a[i][j]=='x')&&(a[i][j+1]=='.')&&(a[i][j+2]=='x'))||((a[i][j]=='.')&&(a[i][j+1]=='x')&&(a[i][j+2]=='x'))){
            cout<<"YES";

            exit(0);
        }
    }
}
for(i=0;i<4;i++){
    for(j=0;j<2;j++){
        if(((a[j][i]=='x')&&(a[j+1][i]=='x')&&(a[j+2][i]=='.'))||((a[j][i]=='x')&&(a[j+1][i]=='.')&&(a[j+2][i]=='x'))||((a[j][i]=='.')&&(a[j+1][i]=='x')&&(a[j+2][i]=='x'))){
            cout<<"YES";
            exit(0);
        }
    }
}

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(((a[i][j]=='x')&&(a[i+1][j+1]=='x')&&(a[i+2][j+2]=='.'))||((a[i][j]=='x')&&(a[i+1][j+1]=='.')&&(a[i+2][j+2]=='x'))||((a[i][j]=='.')&&(a[i+1][j+1]=='x')&&(a[i+2][j+2]=='x'))){
            cout<<"YES";
            exit(0);
        }
    }
}

for(i=2;i<4;i++){
    for(j=0;j<2;j++){
        if(((a[i][j]=='x')&&(a[i-1][j+1]=='x')&&(a[i-2][j+2]=='.'))||((a[i][j]=='x')&&(a[i-1][j+1]=='.')&&(a[i-2][j+2]=='x'))||((a[i][j]=='.')&&(a[i-1][j+1]=='x')&&(a[i-2][j+2]=='x'))){
            cout<<"YES";
            exit(0);
        }
    }
}
cout<<"NO";

return 0;
}






