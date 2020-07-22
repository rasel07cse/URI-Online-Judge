#include<stdio.h>
#define pi 3.14159

int main(){

    float a,b,c,d,w,x,y,z,sum;

    scanf("%f %f %f",&a,&b,&c);


    d=.5*a*c;
    w=pi*c*c;
    x= ((a+b)/2)*c;
    y=b*b;
    z=a*b;


    printf("TRIANGULO: %.3f\n",d);
    printf("CIRCULO: %.3f\n",w);
    printf("TRAPEZIO: %.3f\n",x);
    printf("QUADRADO: %.3f\n",y);
    printf("RETANGULO: %.3f\n",z);


return 0;
}
