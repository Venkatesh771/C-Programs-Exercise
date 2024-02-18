//Greatest Of Three Numbers..
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter A:");
	scanf("%d",&a);
	
	printf("Enter B:");
	scanf("%d",&b);
	
	printf("Enter C:");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("%d Is Greater Than %d And %d:",a,b,c);
	}
	else if(b>a && b>c){
		printf("%d Is Greater Than %d And %d:",b,a,c);
	}
	else{
		printf("%d Is Greater Than %d And %d:",c,a,b);
	}
}
