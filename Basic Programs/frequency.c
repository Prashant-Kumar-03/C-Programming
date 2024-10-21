//frequency of numbers other than the given number
#include<stdio.h>
int lnrsearch(int *arr, int n, int k){
	int freq=0;
	int i;
	
	for(i=0;i<n;i++){
		if(k!=arr[i]){
			freq++;
		}
	}
	return freq;
	
}
int main(){
	int n;
	scanf("%d",&n);
	int i,arr[100],key;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	int count=lnrsearch(arr,n,key);


	printf("\nfrequency of the numbers other than %d is %d",key,count);
		
			
	return 0;
}
