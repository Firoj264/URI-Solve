/*In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.

Input
The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.*/



#include <stdio.h>

int main()
{
    int a1,b1,a2,b2;
    float c1,d,c2;

    scanf("%d %d %f",&a1,&b1,&c1);
    scanf("%d %d %f",&a2,&b2,&c2);

    d=(b1*c1)+(b2*c2);

    printf("VALOR A PAGAR: R$ %.2f\n",d);
    return 0;
}
