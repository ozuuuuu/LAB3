#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    if (n <= 0) return;
    printf("%d", a);
    for (int i = 1; i < n; ++i) {
        printf(" %d", b);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int count;
    printf("Enter number of terms: ");
    scanf("%d", &count);
    printf("Fibonacci series: ");
    fibonacci(count);
    return 0;
}
