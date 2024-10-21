#include<stdio.h>
int main()
{
	int n;
	printf("enter number of rows: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			printf(" ");
		}
		for(int j=0;j<(n-i);j++){
			printf("%d ",(n-i));
		}
		printf("\n");
	}
	return 0;
}
