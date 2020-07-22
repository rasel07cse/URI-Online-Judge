#include<stdio.h>
int main(){
    int a,x=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a);
        if(a%2==0){
            x++;
        }
    }
    printf("%d valores pares\n",x);
return 0;
}
