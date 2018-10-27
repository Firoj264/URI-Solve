#include <stdio.h>
#include <math.h>

int main() {

    double v[3],aux;
    int i,j;

    scanf("%lf %lf %lf",&v[0],&v[1],&v[2]);

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    if(v[0]>=(v[1]+v[2])){
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if(pow(v[0],2)==pow(v[1],2)+pow(v[2],2)){
            printf("TRIANGULO RETANGULO\n");
            }else if(pow(v[0],2)>pow(v[1],2)+pow(v[2],2)){
                printf("TRIANGULO OBTUSANGULO\n");
                }else if(pow(v[0],2)<pow(v[1],2)+pow(v[2],2)){
                    printf("TRIANGULO ACUTANGULO\n");
                }
        if(v[0]==v[1] && v[1]==v[2]){
            printf("TRIANGULO EQUILATERO\n");
        }else if(v[0]==v[1] || v[1]==v[2] || v[2]==v[0]){
            printf("TRIANGULO ISOCELES\n");
        }
    }

    return 0;
}
