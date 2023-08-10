#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], result[100];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    strcpy(result, str1);  
    strcat(result, str2);  

    printf("Concatenated string: %s\n", result);
    
    return 0;
}
