#include<stdio.h>
int main()
{
    int i,X, pos = 0,a[1000];
    scanf("%d",&X);

    if(1<=X && X<=1000)
    {
        for(i=0; i<X; i++)
        {
            if(X%2!= 0) pos++;}

   printf("%d\n",pos);}
    else
    return 0;
}
