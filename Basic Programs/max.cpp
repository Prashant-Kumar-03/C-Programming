#include<stdio.h>
int main(){
	int a,b,c,l;
	scanf("%d%d%d",&a,&b,&c);
	l=a;
	if(b>l){
		l=b;	
	}
	if(c>l)
	{
		l=c;
	}
	printf("%d",l);
	
	
	return 0;
}
