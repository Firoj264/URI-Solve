#include<stdio.h>

int main()
{

    int s1,s2,s3,s4 ,N;

    scanf("%d",&N);
    s1=N/3600;
    s2=N%3600;
    s3=s2/60;
    s4=s2%60;
    printf("%d:%d:%d\n",s1,s3,s4);
    return 0;
}

