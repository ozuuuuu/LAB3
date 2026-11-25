#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void concat(const char *s1, const char *s2, char *out, size_t outSize) {
    snprintf(out, outSize, "%s%s", s1, s2);
}

bool isPalindrome(const char *s) {
    size_t len = strlen(s);
    for (size_t i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - i - 1]) return false;
    }
    return true;
}

int countVowels(const char *s) {
    int count = 0;
    for (size_t i = 0; s[i]; ++i) {
        char c = tolower((unsigned char)s[i]);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') ++count;
    }
    return count;
}

int main() {
    int choice;
    char str1[100], str2[100], result[200];
    char str[256];
    do {
        printf("\nString Operations Menu:\n");
        printf("1. Concatenate two strings\n");
        printf("2. Check palindrome\n");
        printf("3. Count vowels in a string\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter first string: ");
                scanf("%99s", str1);
                printf("Enter second string: ");
                scanf("%99s", str2);
                concat(str1, str2, result, sizeof(result));
                printf("Result: %s\n", result);
                break;
            case 2:
                printf("Enter a string: ");
                scanf("%255s", str);
                if (isPalindrome(str))
                    printf("%s is a palindrome.\n", str);
                else
                    printf("%s is not a palindrome.\n", str);
                break;
            case 3:
                printf("Enter a string: ");
                scanf("%255s", str);
                printf("Vowel count: %d\n", countVowels(str));
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 4);
    return 0;
}
