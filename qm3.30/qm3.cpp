#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[1001];
    scanf("%s",&a);
    int len=strlen(a),count=0;
    
    for(int i=0;i<len;i++){
    	if(i==0){
    		if(a[0]=='@'||a[len]=='@'||a[len]=='.'){
    			cout<<"no";
    			break;
			}
		}if(!((a[i]<='z'&&a[i]>='a')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9')||a[i]=='_'||a[i]=='-'||a[i]=='@'||a[i]=='.')){
				cout<<"no";
    			break;
		}if(a[i]=='@'){
			count++;
		}if(a[i-1]=='@'&&a[i]=='.'){
			cout<<"no";
    		break;
		}if(i==len-1){
			if(count==1){
		        cout<<"yes";
			}else{
				cout<<"no";
			}
		}
	}
return 0; 
 
}

