#include<stdio.h>

int solution(int a){
	int odd=0,even=0;
	while(a!=0){
		int dig=a%10;
		if(dig%2==0){
			even+=dig;
		}
		else{
			odd+=dig;
		}
		
		a=a/10;
		
	}

	if(odd>even){
		return odd;
	}
	else{
		return even;
	}
}

int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int res=solution(n);
	printf("%d",res);
	return 0;
}
