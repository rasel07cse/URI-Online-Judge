#include<stdio.h>
int main(){
    int a,e=0,o=0,p=0,n=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a);
        if(a%2==0) e++;
        else o++;
        if(a>0) p++;
        else if(a<0) n++;
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
return 0;
}
