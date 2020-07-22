#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    if(5<n && n<2000 && n%2==0){
        for(int i=2;i<=n;i++){
            r= i*i;
            printf("%d^2 = %d\n",i,r);
            i+=1;
        }
    }
    return 0;
}
