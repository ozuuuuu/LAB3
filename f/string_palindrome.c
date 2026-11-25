#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char *s) {
    size_t len = strlen(s);
    for (size_t i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - i - 1]) return false;
    }
    return true;
}

int main() {
    char str[256];
    printf("Enter a string: ");
    scanf("%255s", str);
    if (isPalindrome(str))
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);
    return 0;
}
