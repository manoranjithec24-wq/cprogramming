#include <stdio.h>

int main() {
    int cart[10];
    int n = 3;   // number of items
    int i;

    // Input items into the cart
    printf("Enter %d items:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &cart[i]);
    }

    // Display cart items
    printf("Cart Items:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", cart[i]);
    }

    return 0;
}
