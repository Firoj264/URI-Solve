#include<stdio.h>

int main()
{

    int s1,s2,s3,s4 ,N;

    scanf("%d",&N);
    s1=N/365;
    s2=N%365;
    s3=s2/30;
    s4=s2%30;
    printf("%d ano(s)\n",s1);
    printf("%d mes(es)\n",s3);
    printf("%d dia(s)\n",s4);
    return 0;
}

