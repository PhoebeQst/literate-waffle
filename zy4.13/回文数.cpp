#include<iostream> 
using namespace std;
int huiwen(int a){
	int b[1000]={0},c=0; 
	while(a){
	  b[c]=a%10;
	  a/=10;
	  c++;
	}
	for(int i=0;i<c;i++){
		if(b[i]!=b[c-i-1]){
			return 0;
		}
	}return 1;
}
int main (){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int m,k;
		cin>>m>>k;
		int count=0;
		while(count<k){
			m++;
			int t=huiwen(m);
			if(t){
				cout<<m<<' ';
				count++;
			}
		}
	}return 0;
}
