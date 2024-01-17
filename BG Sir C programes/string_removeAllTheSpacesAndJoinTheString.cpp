//WAP TO REMOVE ALL THE SPACES AND JOIN ALL THE WORDS.
 #include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char result[100];
    
    printf("Enter a string: ");
    gets(input);

    int Index = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] != ' ') {
            result[Index] = input[i];
            Index++;
        }
    }
    result[Index] = '\0';

    printf("Modified string: %s\n", result);

    return 0;
}

