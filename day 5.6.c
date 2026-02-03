#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;   // points to first element

    for (int i = 0; i < 4; i++) {
        printf("%d\n", *ptr); // access value via pointer
        ptr++;                // move to next element
    }

    return 0;
}
