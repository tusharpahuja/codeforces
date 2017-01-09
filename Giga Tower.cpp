#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

int main(){
long long a,i,er=0,te,c=0;
cin>>a;
if(a>=-8){
    c++;
    a++;
    while(true){
        te = a;
        while(te>0){
            if(te%10 ==8){
                er=1;
                break;
            }
            te /= 10;
        }
        if(er==1){
            break;
        }
        a++;
        c++;
    }
    cout<<c;
}
else{
    a = abs(a);
    c++;
    a--;
    while(true){
        te = a;
        while(te>0){
            if(te%10 ==8){
                er=1;
                break;
            }
            te /= 10;
        }
        if(er==1){
            break;
        }
        a--;
        c++;
    }
    cout<<c;
}
return 0;
}







