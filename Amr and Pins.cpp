#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
double r,x,y,x1,y1,re,dis;
cin>>r>>x>>y>>x1>>y1;
dis = sqrt( (x-x1)*(x-x1) + (y-y1)*(y-y1) );
cout<<ceil(dis/(2*r));
return 0;
}






