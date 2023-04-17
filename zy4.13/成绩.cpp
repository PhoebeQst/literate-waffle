#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[30];
	float ps;
	float qm;
	float grade; 
}a[100];
 
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%s %f %f",&a[i].name,&a[i].ps,&a[i].qm);  
		a[i].grade=0.4*a[i].ps+0.6*a[i].qm;
	}
     int j,m;
      for(i=0;i<n;i++)     
    {
    	for(j=0;j<n-i-1;j++)           
    	{
    		
			if(a[j].grade<a[j+1].grade)	
			{
				char str[101];      
		       m=a[j].grade;
				a[j].grade=a[j+1].grade;
				a[j+1].grade=m;
					strcpy(str,a[j+1].name); 
					strcpy(a[j+1].name,a[j].name);
					strcpy(a[j].name,str) ;     
				}
		 } 
	}
     
	for(i=0;i<n;i++){
		printf("%30s ",a[i].name); 
		printf("%.2f ",a[i].ps);
		printf("%.2f ",a[i].qm);   
		printf("%.2f/n",a[i].grade);
	}
	return 0;
}



