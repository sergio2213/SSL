#include <stdio.h>

int main() {
    char hello[] = "Hello, Sergio!";
    printf("%s\n", hello);
    FILE* file = fopen("output.txt", "w");
    fprintf(file, "%s\n", hello);
    fclose(file);
    return 0;
}