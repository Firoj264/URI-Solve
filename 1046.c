#include<stdio.h>
int main(int argc, char const *argv[])
{

    int t1,t2,i;

    scanf("%d %d",&t1,&t2);

    i=24-t1;

    if(t1<24 && t1>=0 && 0<=t2 && t2<24)
    {

        if (t1==t2)

            printf("O JOGO DUROU 24 HORA(S)\n");

        else if(t1>t2)

            printf("O JOGO DUROU %d HORA(S)\n",i+t2);

        else

            printf("O JOGO DUROU %d HORA(S)\n",t2-t1);

    }

    return 0;

}
