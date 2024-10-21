#include<stdio.h>
#include"stdlib.h"
int main()
{
	char str1[20],str2[20],str3[20];
	printf("Enter a string:\n");
	gets(str1);
	printf("The entered string is %20s",str1);
	printf("The entered string is %-20s",str1);
	puts(str1);
	printf("Enter next string: ");
	fgets(str3, sizeof str3, stdin);
	printf("The entered string is %s",str3);
	printf("Enter another string: ");
	scanf("%s",str2);
	printf("The entered string is %s",str2);
	printf("\nThe first three character of the entered string is %.3s",str3);
	return 0;
}
