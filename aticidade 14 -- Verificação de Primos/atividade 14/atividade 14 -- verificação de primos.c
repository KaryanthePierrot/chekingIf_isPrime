#include <stdio.h>
#include <math.h>

int main(void) {
    int n, d;
    puts("O seu numero e primo ou nao? Vamos descobrir, digite seu numero: ");
    scanf("%d", &n);
    
    for (d = 2; d <= ceil(sqrt(n)); d++) {
        if (n % d == 0) {
            printf("%d nao e primo!\n", n);
            return 0;
        }
    }

    printf("%d e primo!\n", n);
    return 0;
}
