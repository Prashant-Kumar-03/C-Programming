//sum of the numbers other than the given numbers in the array
#include<stdio.h>
int lnrsearchsum(int *arr, int n, int k){
	int sum=0;
	int i;
	
	for(i=0;i<n;i++){
		if(k!=arr[i]){
			sum+=arr[i];
		}
	}
	return sum;
	
}
int main(){
	int n;
	scanf("%d",&n);
	int i,arr[100],key;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	int sum=lnrsearchsum(arr,n,key);


	printf("\nsum of the numbers other than %d is %d",key,sum);
		
			
	return 0;
}
