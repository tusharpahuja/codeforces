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
b = a;
reverse(b.begin(),b.end());
cout<<a<<b;
return 0;
}
