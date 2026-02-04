#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *digits = malloc(n * sizeof(int));
    if (!digits) return 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &digits[i]);
    }

    int carry = 1;

    for (int i = n - 1; i >= 0; i--) {

        if (carry == 0) {
            break;
        }

        if (digits[i] < 9) {
            digits[i] = digits[i] + 1;
            carry = 0;
            break;
        }

        
        digits[i] = 0;
        carry = 1;
    }

    if (carry == 1) {
        int *temp = realloc(digits, (n + 1) * sizeof(int));
        if (!temp) {
            free(digits);
            return 1;
        }
        digits = temp;

        for (int i = n; i > 0; i--) {
            digits[i] = digits[i - 1];
        }
        digits[0] = 1;
        n++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    free(digits);
    return 0;
}
