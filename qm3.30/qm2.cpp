#include<iostream>
using namespace std;
int main(){
	int a[20],n;
	cin>>n; 
	int count=0,judge=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}for(int j=0;j<n;j++){
		for(int m=j+1;m<n;m++){
			if(a[j]==a[m]){
				count++;
			}if(m==n-1&&count==2){
				cout<<a[j]<<" ";
				judge=1;
			}if(m==n-1){
				count=0;
			}
		}
	}if(!judge){
		cout<<"none";
	}
	return 0;
}
