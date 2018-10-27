#include<stdio.h>
int main()
{

    double a,b,c,r1,r2,d,r;
    scanf("%lf %lf %lf", &a, &b, &c);
    d= pow(b,2)-(4*a*c);
    if(d<0 || (2*a) == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r= sqrt(d);
        r1= (-b + r)/(2*a);
        r2= (-b - r)/(2*a);
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }

    return 0;
}
