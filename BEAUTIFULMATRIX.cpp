#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int i,j,a[5][5],ki,kj;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                ki=i;
                kj=j;
            }
        }
    }
    if(((ki==0)||(ki==4))&&((kj==0)||(kj==4))){
        cout<<4;
    }
    else if((((ki==0)||(ki==4))&&((kj==1)||(kj==3)))||(((ki==1)||(ki==3))&&((kj==0)||(kj==4)))){
        cout<<3;
    }
    else if((((ki==0)||(ki==4))&&(kj==2))||((ki==2)&&((kj==0)||(kj==4)))){
        cout<<2;
    }
    else if((((ki==1)||(ki==3))&&(kj==2))||((ki==2)&&((kj==1)||(kj==3)))){
        cout<<1;
    }
    else if((ki==2)&&(kj==2)){
        cout<<0;
    }
    else if(((ki==1)||(ki==3))&&((kj==1)||(kj==3))){
        cout<<2;
    }
}
