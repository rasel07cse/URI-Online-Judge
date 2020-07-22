#include<stdio.h>
int main()
{
    double a,b=0.0;
    int i,c=0;
    for(i=1;i<=6;i++){
        scanf("%lf",&a);
        if(a>0){
            b+=a;
            c++;
        }
    }
    printf("%d valores positivos\n%.1lf\n",c,(b/(double)c));
    return 0;
}
