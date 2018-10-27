#include <stdio.h>
int main ()
{
    double codigo, qtd, total = 0;
    int codig[5] = {1, 2, 3, 4, 5}, i;
    double valor[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    scanf ("%lf %lf", &codigo, &qtd);
    for(i = 0; i < 5; i++)
    {
        if (codigo == codig[i])
        {
            total = valor[i] * qtd;
        }
    }
    printf ("Total: R$ %.2lf\n", total);
    return 0;
}
