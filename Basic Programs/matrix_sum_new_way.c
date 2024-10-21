#include<stdio.h>
int main()
{
	int a[100][100],r,i,j,sum=0,pd=0,sd=0,rem=0;
	printf("Enter the row or column of the square matrix: ");
	scanf("%d",&r);
	
	printf("enter the elements of %dX%d matrix:\n",r,r);
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			scanf("%d",&a[i][j]);
		}	
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			sum+=a[i][j];  //for total sum
			if(i==j)
				pd+=a[i][j];   //for sum of principle diagonal
			if(i+j==r-1)
				sd+=a[i][j];   //for sum of secondary diagonal
			if(i!=j && i+j!=r-1)
				rem+=a[i][j];  //for sum of other elements than pd and sd
		}	
	}
	printf("total sum = %d\nPD sum = %d\nSD sum = %d\nRem Sum = %d",sum,pd,sd,rem);
	return 0;
}
