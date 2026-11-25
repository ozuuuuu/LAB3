#include <stdio.h>
#include <string.h>

void concat(const char *s1, const char *s2, char *out, size_t outSize) {
    // Ensure we do not overflow the output buffer
    snprintf(out, outSize, "%s%s", s1, s2);
}

int main() {
    char a[100], b[100];
    char result[200];
    printf("Enter first string: ");
    scanf("%99s", a);
    printf("Enter second string: ");
    scanf("%99s", b);
    concat(a, b, result, sizeof(result));
    printf("Concatenated: %s\n", result);
    return 0;
}
