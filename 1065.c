#include<stdio.h>
int main()
{
    int i, pos = 0,eve=0,neg=0,odd=0;
    int n;

    if(n >0 || n < 0)
    {
        for(i=0; i<5; i++)
        {
            scanf("%d", &n);
            if(n > 0) pos++;
            if(n < 0) neg++;
            if(n%2==0) eve++;
            if(n%2!=0) odd++;

        }
    printf("%d valor(es) par(es)\n",eve);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);}
    else
    return 0;
}

