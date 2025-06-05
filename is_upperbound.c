#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 4

int main(void) {
    int arr[N] = {1,9,5,6};
    int value = 9;
    bool is_upper = true;
    int i = 0;

    while (i < N) {
        is_upper = is_upper && (arr[i] <= value);
        i++;
    }

    printf("The values is upper bound?: %d", is_upper);
    
    return EXIT_SUCCESS;
}