#include<iostream>
using namespace std;
#include<stdlib.h>
int main(){
char T;
cin>>T;
char arr[3][10];
char str[100];
cin>>str;
int i,j,k=0,temp;
arr[0][0]='q';arr[0][1]='w';arr[0][2]='e';arr[0][3]='r';arr[0][4]='t';arr[0][5]='y';arr[0][6]='u';arr[0][7]='i';arr[0][8]='o';arr[0][9]='p';
arr[1][0]='a';arr[1][1]='s';arr[1][2]='d';arr[1][3]='f';arr[1][4]='g';arr[1][5]='h';arr[1][6]='j';arr[1][7]='k';arr[1][8]='l';arr[1][9]=';';
arr[2][0]='z';arr[2][1]='x';arr[2][2]='c';arr[2][3]='v';arr[2][4]='b';arr[2][5]='n';arr[2][6]='m';arr[2][7]=',';arr[2][8]='.';arr[2][9]='/';
if(T=='L'){
    while(str[k]!='\0'){
        for(i=0;i<3;i++){
            temp=0;
            for(j=0;j<10;j++){
                if(str[k]==arr[i][j]){
                    cout<<arr[i][j+1];
                    temp=1;
                    break;
                }
            }
            if(temp==1){
                break;
            }
        }
        k++;
    }
}
else if(T=='R'){
    while(str[k]!='\0'){
        for(i=0;i<3;i++){
            temp=0;
            for(j=0;j<10;j++){
                if(str[k]==arr[i][j]){
                    cout<<arr[i][j-1];
                    temp=1;
                    break;
                }
            }
            if(temp==1){
                break;
            }
        }
        k++;
    }
}
return 0;
}
