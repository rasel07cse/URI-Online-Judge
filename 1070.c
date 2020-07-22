#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    if(x%2==0){
        int n=x+1;
        for(int i=0;i<6;i++){
            printf("%d\n",n);
            n+=2;
        }
    }
    else{
            n=x;
        for(int i=0;i<6;i++){
            printf("%d\n",n);
            n+=2;
        }
    }
    return 0;
}
