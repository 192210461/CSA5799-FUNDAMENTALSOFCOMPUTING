#include <stdio.h>
int main()
{
void convertToLowercase(char *str){
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert to lowercase by adding 32 to ASCII value
        }
        i++;
    }
}

int main() {
    char input[100];
    
    printf("Enter an uppercase string: ");
    fgets(input, sizeof(input), stdin);
    
    // Removing the newline character from fgets
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
    
    convertToLowercase(input);
    
    printf("Converted lowercase string: %s\n", input);
    
    return 0;
}
