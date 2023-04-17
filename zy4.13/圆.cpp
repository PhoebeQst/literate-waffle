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
	cout<<"直径="<<r*2<<endl<<"周长="<<lenth(r)<<endl<<"面积="<<square(r);
	return 0;
}
