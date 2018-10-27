#include<stdio.h>
int main()
{
    int i, pos = 0;
    double n;

    if(n >0 || n < 0)
    {
        for(i=0; i<6; i++)
        {
            scanf("%lf", &n);
            if(n > 0) pos++;
        }
    printf("%d valores positivos\n",pos);}
    else
    return 0;
}


