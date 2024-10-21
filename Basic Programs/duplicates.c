#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,arr[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		int temp=arr[i];
		for(j=i+1;j<n;j++){
			if(j==i){
				continue;
			}
			else
			{
				if(temp!=-1 && temp==arr[j]){
					arr[j]=-1;
				}
			}
		}
	}
	int k=0;
	int nodup[100];
	for(i=0;i<n;i++){
		if(arr[i]!=-1){
			nodup[k]=arr[i];
			k++;
		}
	}
	int p;
	for(p=0;p<k;p++){
		printf("%d ",nodup[p]);
	}
	return 0;
}
