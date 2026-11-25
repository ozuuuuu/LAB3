#include <stdio.h>

int main() {
    FILE *fp = fopen("number.txt", "w");
    if (!fp) {
        perror("Failed to open file for writing");
        return 1;
    }
    int num = 42; // example integer
    fprintf(fp, "%d", num);
    fclose(fp);
    printf("Wrote %d to number.txt\n", num);
    return 0;
}
