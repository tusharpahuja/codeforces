#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
int n,a,i,j,ind,sum=0,one,two,mini,dis,a1,b1;
scanf("%d %d",&n,&a);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
ind = a-1;
if(arr[ind]==1){
    sum++;
}
one = abs(0-ind);
two = abs((n-1)-ind);
if(one<two){
    mini = two;
}
else{
    mini = one;
}
dis = 1;
while(dis<=mini){
    a1 = ind-dis;
    b1 = ind+dis;
    if((a1>=0)&&(b1<=n-1)){
        if((arr[a1]==1)&&(arr[b1]==1)){
            sum++;
            sum++;
        }
        else if(((arr[b1]==1)&&(arr[a1]==0))||((arr[b1]==0)&&(arr[a1]==1))){
            sum += 0;
        }
    }
    else if((a1<0)&&(b1<=n-1)){
        if(arr[b1]==1){
            sum++;
        }
    }
    else if((a1>=0)&&(b1>(n-1))){
        if(arr[a1]==1){
            sum++;
        }
    }
    dis++;
}
printf("%d",sum);
return 0;
}
