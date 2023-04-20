#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>=1&&n<=10){
		cout<<"Chilren";
	} else if(n>=11&&n<=20){
		cout<<"Teenagers";
	}else if(n>=21&&n<=40){
		cout<<"Youth";
	}else if(n>=41&&n<=50){
		cout<<"middle-aged";
	}else if(n>=51&&n<=80){
		cout<<"Elderly";
	}else if(n>=81&&n<=100){
		cout<<"Old man";
	}
	return 0;
}
