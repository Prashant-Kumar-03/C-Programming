#include<stdio.h>
int main()
{
	int n;
	printf("enter number of rows: ");
	scanf("%d",&n);
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			printf(" ");
		}
		
		for(int j=0;j<(i+1);j++){
			printf("%d ",k%10);
			k++;
			
		}
		printf("\n");
	}
	return 0;
}
