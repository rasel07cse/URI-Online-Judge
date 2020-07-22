#include<stdio.h>

int main(){

    float a,b,c,d,w,x,y,z,sum;

    scanf("%f %f %f\n",&a,&b,&c);
    scanf("%f %f %f",&w,&x,&y);

    d = b*c;
    z = x*y;

    sum=d+z;

    printf("VALOR A PAGAR: R$ %.2f\n",sum);



return 0;
}
