#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
long long n,i,cou,start = 0,dir = 0,sum=0;
cin>>n;
cou = n;
long long a[n],temp[n];
for(i=0;i<n;i++){
    cin>>a[i];
    sum += a[i];
    if(a[i]==0){
        temp[i] = 1;
    }
}
while(sum){
    if(temp[start]==1){
        if(start==0){
            dir = 0;
            cout<<"R";
            start++;
        }
        else if(start == n-1){
            dir = 1;
            cout<<"L";
            start--;
        }
        else{
            if(dir==0){
                cout<<"R";
                start++;
            }
            else{
                cout<<"L";
                start--;
            }
        }
    }
    if(start==0){
        if(a[start]>0){
            cout<<"PR";
            sum--;
            if(sum==0){
                exit(0);
            }
            a[start]--;
            if(a[start]==0){
                temp[start] = 1;
            }
            start++;
        }
        else{
            cout<<"R";
            start++;
        }
        dir = 0;
    }
    else if(start == n-1){
        dir = 1;
        if(a[start]>0){
            cout<<"PL";
            sum--;
            if(sum==0){
                exit(0);
            }
            a[start]--;
            if(a[start]==0){
                temp[start] = 1;
            }
            start--;
        }
        else{
            cout<<"L";
            start--;
        }
    }
    else{
        if(dir == 0){
            if(a[start]>0){
                cout<<"PR";
                sum--;
                if(sum==0){
                    exit(0);
                }
                a[start]--;
                if(a[start]==0){
                    temp[start] = 1;
                }
                start++;
            }
            else{
                cout<<"R";
                start++;
            }
        }
        else{
            if(a[start]>0){
                cout<<"PL";
                sum--;
                if(sum==0){
                    exit(0);
                }
                a[start]--;
                if(a[start]==0){
                    temp[start] = 1;
                }
                start--;
            }
            else{
                cout<<"L";
                start--;
            }
        }
    }
}
return 0;
}
