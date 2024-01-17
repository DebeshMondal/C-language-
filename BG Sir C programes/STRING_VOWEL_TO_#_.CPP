 //WAP TO REPLACE ALL THE VOWELS IN A STATEMENT TO '#'
 
 #include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    char str[100];
    puts("Enter a statement:");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        if (isVowel(str[i])) {
            str[i] = '#';
        }
    }

    printf("Modified statement: %s\n", str);

    return 0;
}

