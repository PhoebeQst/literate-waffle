#include<iostream> 
using namespace std;
#define PI 3.14
float lenth(int r){
	return r*2*PI;
}float square(int r){
	return r*r*PI;
}int main(){
	float r;
	cin>>r;
	cout<<"ֱ��="<<r*2<<endl<<"�ܳ�="<<lenth(r)<<endl<<"���="<<square(r);
	return 0;
}
