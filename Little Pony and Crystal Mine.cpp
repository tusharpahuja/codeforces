#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
int n,mid,i,j,start1,start2;
cin>>n;
char c[n][n];
mid = ceil((float)n/2);
start1 = n/2;
start2 = n/2;
for(i=0;i<mid;i++){
    for(j=0;j<start1;j++){
        cout<<"*";
    }
    for(j=start1;j<=start2;j++){
        cout<<"D";
    }
    for(j=start2+1;j<n;j++){
        cout<<"*";
    }
    start1--;
    start2++;
    cout<<endl;
}
start1++;
start2--;
for(i=mid;i<n;i++){
    start1++;
    start2--;
    for(j=0;j<start1;j++){
        cout<<"*";
    }
    for(j=start1;j<=start2;j++){
        cout<<"D";
    }
    for(j=start2+1;j<n;j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}

