
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
string a,b;
cin>>a;

long long l,i,kr,kb,kg,ky,kn,vr=0,vb=0,vg=0,vy=0,s=0,j;
l = strlen(a.c_str());
for(i=0;i<l;i++){
    if(a[i]=='R'){
        kr++;
    }
    else if(a[i]=='G'){
        kg++;
    }
    else if(a[i]=='B'){
        kb++;
    }
    else if(a[i]=='Y'){
        ky++;
    }
    else if(a[i]=='!'){
        kn++;
    }
}
if(kn==0){
    cout<<0<<" "<<0<<" "<<0<<" "<<0;
    exit(0);
}

for(i=0;i<l;i++){
    if(a[i]=='R'){
        j = i+4;
        while(j<l){
            if(a[j]=='!'){
                a[j]='R';
                vr++;
            }
            j += 4;
        }
        j = i-4;
        while(j>=0){
            if(a[j]=='!'){
                a[j]='R';
                vr++;
            }
            j -= 4;
        }
    }
    if(a[i]=='B'){
        j = i+4;
        while(j<l){
            if(a[j]=='!'){
                a[j]='B';
                vb++;
            }
            j += 4;
        }
        j = i-4;
        while(j>=0){
            if(a[j]=='!'){
                a[j]='B';
                vb++;
            }
            j -= 4;
        }
    }
    if(a[i]=='Y'){
        j = i+4;
        while(j<l){
            if(a[j]=='!'){
                a[j]='Y';
                vy++;
            }
            j += 4;
        }
        j = i-4;
        while(j>=0){
            if(a[j]=='!'){
                a[j]='Y';
                vy++;
            }
            j -= 4;
        }
    }
    if(a[i]=='G'){
        j = i+4;
        while(j<l){
            if(a[j]=='!'){
                a[j]='G';
                vg++;
            }
            j += 4;
        }
        j = i-4;
        while(j>=0){
            if(a[j]=='!'){
                a[j]='G';
                vg++;
            }
            j -= 4;
        }
    }
    if((kr+kb+kg+ky+vr+vb+vg+vy)==(l)){
        break;
    }
}
cout<<vr<<" "<<vb<<" "<<vy<<" "<<vg;

return 0;
}
