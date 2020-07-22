#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,m,n,x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a*60;
    f=e+b;
    g=c*60;
    h=g+d;
    m=f-h;
    n=m/60;
    x=m%60;
    if(x<0){
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",-n,-x);
    }
    else if(a==c && b==d){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",n,x);

    return 0;
}
