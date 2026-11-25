#include <stdio.h>

int main() {
    FILE *fp = fopen("number.txt", "r");
    if (!fp) {
        perror("Failed to open file for reading");
        return 1;
    }
    int num;
    if (fscanf(fp, "%d", &num) != 1) {
        fprintf(stderr, "Failed to read integer from file\n");
        fclose(fp);
        return 1;
    }
    fclose(fp);
    printf("Read integer: %d\n", num);
    return 0;
}
