#include<stdio.h>

int main(){

    float a,b,c,d;
    char s;

    scanf("%s",&s);
    scanf("%f %f",&a,&b);

    c =(b/100)*15;
    d=a+c;

    printf("TOTAL = R$ %.2f\n",d);




return 0;
}
