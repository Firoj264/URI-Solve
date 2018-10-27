#include<stdio.h>
int main()
{
    int i, pos = 0;
    double avg,a[10],b=0;
    {
        for(i=0; i<6; i++)
        {
            scanf("%lf", &a[i]);

            if(a[i] > 0) pos++;
        }
        printf("%d valores positivos\n",pos);
    }
        for(i=0; i<6; i++)
        {
            if(a[i]>0)
            {

                b=b+a[i];
            }
        }

    avg=b/pos;
    printf("%.1lf\n",avg);
    return 0;
}
