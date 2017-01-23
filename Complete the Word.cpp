#include<bits/stdc++.h>

using namespace std;

int main(){
string s,v="",tot="";
long long l,i,j,c=0,er=0,yo=1,k;
cin>>s;
l = strlen(s.c_str());
if(l<26){
	cout<<-1;
	exit(0);
}
else{
	long long a[28];
	for(i=0;i<=l-26;i++){
		memset(a,0,sizeof(a));
		c=0;
		er=0;
		yo=1;
		for(j=i;j<i+26;j++){
			if(s[j]=='?'){
				c++;			
			}
			else {a[int(s[j])-64]++;}	
		}	
		v = "";
		for(j=i;j<i+26;j++){

			if((s[j])=='?'){
				for(k=1;k<=26;k++){
					if(a[k]==0){
						a[k] = 1;
						v.push_back((char(k+64)));
						//cout<<char(k+64)<<" ";
						c--;
						break;	
					}
				}
				if(k>26){
					//cout<<"A";
					er=1;
					//exit(0);
					break;
				}
				
			}
			else{
				if(a[int(s[j])-64]>1){
					er=1;
					break;
				}
				else if(a[int(s[j])-64]==1){
					v.push_back(s[j]);
				}
			}
		}
		//cout<<v<<endl;
		if(er==0 && c==0){
			for(k=i+26;k<l;k++){
				if(s[k]=='?'){
					v.push_back('A');
					continue;				
				}
				v.push_back(s[k]);
			}
			cout<<tot<<v;
			exit(0);		
		}
		if(s[i]=='?'){
			tot.push_back('A');
			continue;				
		}
		tot.push_back(s[i]);
	}
	cout<<-1;
}
return 0;
}
