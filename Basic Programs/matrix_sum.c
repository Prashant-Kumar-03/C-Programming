#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j,sum=0,pd=0,sd=0;
	printf("Enter the size of the matrix nXn\n");
	scanf("%d",&r);
	c=r;
	printf("enter the elements of %d*%d matrix:\n",r,c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}	
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum+=a[i][j];
		}	
	}
	printf("\nsum of all the elements is %d",sum);
	for(i=0;i<r;i++){
		pd+=a[i][i];
		sd+=a[i][r-i-1];
	}
	printf("\nsum of PD is %d",pd);

	printf("\nsum of SD is %d",sd);
	if(r%2==0){
		printf("\nsum of elements other than PD and SD is %d",sum-pd-sd);
	}
	else{
		int x=r/2;
		printf("\nsum of other elements than PD and SD is %d",sum-pd-sd+a[x][x]);
	}
	int dup[100][100];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			dup[i][j]=a[i][j];
			dup[i][i]=0;
		    dup[i][r-i-1]=0;
			
		}	
	}
	printf("\nusing duplicate matrix:");
	int ot_sum=0;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			ot_sum+=dup[i][j];
		}	
	}
	printf("\nsum of other elements than PD and SD is %d",ot_sum);
	
	return 0;
	
}

