#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a+b;
    f=c+d;
    if(b>c && d>a && f>e && c>=0 && d>=0 && a%2==0){
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
return 0;
}
