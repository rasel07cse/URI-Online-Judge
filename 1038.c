#include<stdio.h>
int main(){
    int a,b;
    float x;
    scanf("%d %d",&a,&b);
    float ar[5]={4.00,4.50,5.00,2.00,1.50};
    x=ar[a-1]*b;
    printf("Total: R$ %.2f\n",x);

return 0;
}
