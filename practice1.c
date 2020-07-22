#include<stdio.h>
int main(){
    int s,e;
    printf("Enter how multiplication table you want.\nFrom : ");
    scanf("%d",&s);
    printf("To : ");
    scanf("%d",&e);
    e=(e-s)+1;
    e=e*10;
    int i,j;
        for(i=1;i<=e;i++){
            j=i%10;
            if(j==0) j=10;
            printf("%d * %d = %d\n",s,j,s*j);
            if(i%10==0) s++;
        }



return 0;
}
