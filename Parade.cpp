#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long n,i,j,suml=0,sumlt=0,sumrt=0,sumr=0,beauty=0,beautyt=0,key=-1;
cin>>n;
long long l[n],r[n],diff,maxi=0;
for(i=0;i<n;i++){
    cin>>l[i]>>r[i];
    suml += l[i];
    sumr += r[i];
}
beauty = abs(suml-sumr);
for(i=0;i<n;i++){
    if(l[i]>r[i]){
        diff = l[i]-r[i];
        sumlt = suml-diff;
        sumrt = sumr+diff;
        beautyt = abs(sumlt-sumrt);
        if(beautyt>beauty){
            beauty = beautyt;
            maxi = diff;
            key = i;
        }
    }
    else if(r[i]>l[i]){
        diff = r[i]-l[i];
        sumlt = suml+diff;
        sumrt = sumr-diff;
        beautyt = abs(sumlt-sumrt);
        if(beautyt>beauty){
            beauty = beautyt;
            maxi = diff;
            key = i;
        }
    }
}
cout<<key+1;
return 0;
}






