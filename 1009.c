/*Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.

- Don’t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.*/

#include <stdio.h>

int main()
{
    char name[20];
    float a,b,c;

    scanf("%s",name);
    scanf("%f %f",&a,&b);

    c=a+(b*15)/100;

    printf("TOTAL = R$ %.2f\n",c);

    return 0;
}
