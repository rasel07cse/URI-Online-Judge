#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    if(x%2==0){
        n=1;
        for(int i=0;i<n;i++){
            printf("%d\n",n);
            n+=2;
            if(n>x){
            break;
            }
        }
    }
    else{
        n=1;
        for(int i=0;i<n;i++){
            printf("%d\n",n);
            n+=2;
            if(n>x){
            break;
            }
        }
    }
    return 0;
}
