#include <stdio.h>

#define MAX_ITERS 10

int main(void) {

    int i = 5;
    printf("Hello world!");

    printf("%d", i);

    for (int j=0; j < MAX_ITERS; j++) {
        i += j;
        printf("Updated i = %d", i);
    }

    return 0;
}
