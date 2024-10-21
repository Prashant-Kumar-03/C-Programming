#include<stdio.h>
int main()
{
	char str1[100];
	printf("enter a string:");
	fgets(str1, sizeof str1, stdin);
	int word=0,i,count=0;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==' '|| str1[i]=='\n'||str1[i]=='\t'){
			word++;
		}
		count++;	
	}
	
	count--;
	printf("no. of words are: %d\n",word);
	printf("no. of chars are: %d",count);
	
	
	return 0;
	
}
