#include <stdio.h>

typedef union {
    int i;
    float f;
    char c;
} NumberUnion;

int main() {
    NumberUnion u;
    u.i = 42; // assign integer
    printf("As int: %d\n", u.i);
    // Now assign a float, overwriting previous value
    u.f = 3.14f;
    printf("As float: %f\n", u.f);
    // Now assign a character
    u.c = 'A';
    printf("As char: %c\n", u.c);
    // Demonstrate that only one member holds a valid value at a time
    printf("Reading int after char assignment (undefined): %d\n", u.i);
    return 0;
}
