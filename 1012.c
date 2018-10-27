/*Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.*/
#include<stdio.h>
int main()

{
    double A,B,C,pi;
    pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    TRIANGULO=((1.0/2)*(A*C));
    CIRCULO=(pi*(C*C));
    TRAPEZIO=(((1.0/2)*(A+B))*C);
    QUADRADO=B*B;
    RETANGULO=A*B;;
    printf("TRIANGULO : %.3lf\n",TRIANGULO);
    printf("CIRCULO : %.3lf\n",CIRCULO);
    printf("TRAPEZIO : %.3lf\n",TRAPEZIO);
    printf("QUADRADO : %.3lf\n",QUADRADO);
    printf("RETANGULO : %.3lf\n",RETANGULO);
    return 0;


}
