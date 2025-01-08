#include <stdio.h>

main() {
    int num, *ptr;

    printf("Enter an integer value for num: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Original value of num: %d\n", num);

    printf("Enter a new value to modify num via pointer: ");
    scanf("%d", ptr);

    printf("Modified value of num: %d\n", num);

}
