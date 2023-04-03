#include<iostream>
#include<algorithm.h>
using namespace std;
int main(){
	int n,a1,b1,a2,b2;
	cin>>n>>a1>>b1;
	for(int i=0;i<n-2;i++){
		cin>>a2>>b2;
		a1=a1*b2+a2*b1;
		b1=b1*b2;
		if(a1<b1){
		int g=_gcd(a1,b1);
	   }else{
	   	int g=_gcd(b1,a1);
	   }a1/=g;
	   b1/=g;
	}if(b1==1){
		cout<<a1; 
	}else{
		if(b1<0){
			b1=-b1;
			a1=-a1;
		}cout<<a1<<"/"<<b1;
	}
	return 0;
	
}
