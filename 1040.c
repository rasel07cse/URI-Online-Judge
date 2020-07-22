#include<stdio.h>
int main(){
    float m,n,o,p,r;
    double M,N;
    scanf("%f %f %f %f",&m,&n,&o,&p);
    M =(m*2+n*3+o*4+p*1)/10;
    printf("Media: %.1lf\n",M);
    if(M>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(M<5){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&r);
        printf("Nota do exame: %.1f\n",r);
        N=(M+r)/2;
        if(N>=5.0)printf("Aluno aprovado.\n");
    else printf("Aluno reprovado.\n");
    printf("Media final: %.1lf\n",N);
    }
return 0;
}
