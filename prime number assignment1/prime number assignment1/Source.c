#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++) {
		printf("%d \t %d\n",n,i);
        // condition for non-prime
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
	printf("\n\n");
    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}