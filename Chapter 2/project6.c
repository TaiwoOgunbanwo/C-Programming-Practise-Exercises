#include <stdio.h>


// Polynomial exercise 2
int main(void) {
    int x;
    printf("Enter your value for x: \n");
    scanf("%d", &x);
    printf("%d\n", ((((3 * x) + 2) * x - 5) * x - 1) * x + 7)* x - 6;
    return 0;
}
