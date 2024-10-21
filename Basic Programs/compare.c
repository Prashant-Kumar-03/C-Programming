#include<stdio.h>
#define str_size 100
int test(char* s1, char*s2){
	int flag=0;
	while(*s1!='\0' || *s2!='\0'){
		if(*s1==*s2){
			s1++;
			s2++;
		} else if((*s1=='\0' && &s2!='\0') || (*s1!='\0' && &s2=='\0') || *s1!=*s2){
			flag=1;
			break;
		}
	}
	return flag;
}
int main(void){
	char str1[str_size],str2[str_size];
	printf("Enter a string: ");
	fgets(str1,sizeof str1,stdin);
	printf("Enter another string: ");
	fgets(str2,sizeof str2,stdin);
	int flg=0;
	flg=test(str1,str2);
	flg==0?printf("strings are equal"):printf("strings are not equal");
}
