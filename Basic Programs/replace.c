#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    char c;
    int temp[100] = {0}; // Initialize all elements to 0
    int i, j;

    // Read the input string
    scanf("%s", str);

    // Consume the newline character left in the input buffer
    getchar();

    // Read another character input
    scanf("%c", &c);
    int max=0;

    // Iterate through the string to count occurrences of each character
    for (i = 0; str[i] != '\0'; i++) {
        char p = str[i];
        temp[i] = 1; // Initialize count to 1
        for (j = 0; str[j] != '\0'; j++) {
            if (i != j && p == str[j]) {
                temp[i]++;
            }
        }
        if(max<temp[i]){
        	max=temp[i];
		}
    }

    // Print the characters in the string
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    // Print the counts of each character
    for (i = 0; str[i] != '\0'; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    // Print the additional character input
    printf("max is %d", max);
    for(i=0;str[i]!='\0';i++){
    	if(temp[i]==max){
    		str[i]=c;
		}
	}
	printf("\n%s",str);
    return 0;
}

