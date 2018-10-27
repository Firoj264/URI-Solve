#include<stdio.h>
int main()
{

    float a,c;
    float b,d;
    scanf("%f",&a);
    if(a<=400.00 && a>=0)
    {
        b=a*.15;
        d=a+b;
        c=d-a;;
        printf("Novo salario: %.2f\n",d);
        printf("Reajuste ganho: %.2f\n",c);
        printf("Em percentual: 15 %%\n");
    }
    else if(a<=800.00 && a>=400.01)
    {
        b=a*.12;
        d=a+b;
        c=d-a;
        printf("Novo salario: %.2f\n",d);
        printf("Reajuste ganho: %.2f\n",c);
        printf("Em percentual: 12 %%\n");
    }
    else if(a<=1200.00 && a>=800.01)
    {
        b=a*.10;
        d=a+b;
        c=d-a;
        printf("Novo salario: %.2f\n",d);
        printf("Reajuste ganho: %.2f\n",c);
        printf("Em percentual: 10 %%\n");
    }
    else if(a<=2000.00 && a>=1200.01)
    {
        b=a*.07;
        d=a+b;
        c=d-a;
        printf("Novo salario: %.2f\n",d);
        printf("Reajuste ganho: %.2f\n",c);
        printf("Em percentual: 7 %%\n");
    }
    else if(a>2000.00)
    {
        b=a*.04;
        d=a+b;
        c=d-a;
        printf("Novo salario: %.2f\n",d);
        printf("Reajuste ganho: %.2f\n",c);
        printf("Em percentual: 4 %%\n");
    }
}
