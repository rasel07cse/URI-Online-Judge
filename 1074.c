#include<stdio.h>
int main(){
    int a[10000],n,on,nu,op,en;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2!=0 && a<0) printf("ODD NEGATIVE\n");
        else if(a==0 ) printf("NULL\n");
        else if(a%2 !=0 && a>0) printf("ODD POSITIVE\n");
        else if(a%2==0 && a<0) printf("EVEN NEGATIVE\n");
    }

return 0;
}
