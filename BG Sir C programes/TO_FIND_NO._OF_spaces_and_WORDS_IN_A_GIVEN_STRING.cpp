#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, count = 0, vowels = 0;
    puts("Enter any string");
    gets(str);

    while (str[i] != '\0') {  // Use '\0' instead of NULL
        if (str[i] == ' ') {
            count++;
        } else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
            str[i]='#';
        }
        i++;
    }

    printf("Number of vowels in the string: %d\n", vowels);
    printf("Total words in the string is %d\n", count + 1);  // Added a newline character
    printf("No. of spaces is = %d\n", count);  // Added a newline character

    return 0;
}

