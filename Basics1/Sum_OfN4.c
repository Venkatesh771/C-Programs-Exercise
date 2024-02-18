#include<stdio.h>
int main(){
	int i,sum=0,n;
	printf("Enter How Many Numbers...");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+i;
		printf("%d ",i);
	}
	printf("\nSum Of %d Numbers is:%d",n,sum);
}
