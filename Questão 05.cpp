#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0)
        return a; 
    else
        return mcd(b, a % b); 
}
int main() {
    int a, b;
    printf("Digite dois n�meros inteiros positivos: ");
    scanf("%d %d", &a, &b);
    printf("O M�nimo Comum Divisor de %d e %d �: %d\n", a, b, mcd(a, b));

    return 0;
}

