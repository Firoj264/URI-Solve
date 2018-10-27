/*Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).

Input
The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.*/
int main()
{
    int X;
    double Y,d;

    scanf("%d",&X);
    scanf("%lf",&Y);

    d=X/Y;

    printf("%.3f km/l\n",d);
    return 0;
}

