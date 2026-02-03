#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }

    // Free the memory
    free(ptr);

    return 0;
}
