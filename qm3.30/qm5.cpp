#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char n[10001];
	scanf("%s",n);
	int count =0 ,a[26],len=strlen(n);
	int i=0;
	for(int j=0;j<len;j++){
		i=n[j]-'a';
		a[i]++;
    } 
	int sum=26*len,trans;
	for(int m=0;m<26;m++){
    for(int t=m+1;t<26;t++){
    	if(a[m]<a[t]){
    		trans=a[m];
    		a[m]=a[t];
    		a[t]=trans;
		}
	}
	} for(int s=0;s<26;s++){
		sum-=a[s]*s;
	}cout<<sum;
	return 0;}
