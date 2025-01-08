#include <stdio.h>

main() {
    FILE *file;
    char content[] = "Hello, World!";
    char buffer[100];

    file = fopen("file.txt", "w");
    fprintf(file, "%s", content);
    fclose(file);

    file = fopen("file.txt", "r");
    fgets(buffer, sizeof(buffer), file);
    printf("File contains: %s\n", buffer);
    fclose(file);
}

