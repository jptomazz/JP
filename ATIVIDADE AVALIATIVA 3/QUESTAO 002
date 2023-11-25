#include <stdio.h>
#include <math.h>

int main() {questão02
    int meses;
    double aporte, taxa;

1212
    scanf("%d", &meses);
    scanf("%lf", &aporte);
    scanf("%lf", &taxa);

    double montante = 0.0;

    for (int i = 1; i <= meses; i++) {
        montante = aporte * (1 + taxa);
        montante *= (pow((1 + taxa), i) - 1) / taxa;

        printf("Montante ao fim do mes %d: R$ %.2f\n", i, montante);
    }

    return 0;
}