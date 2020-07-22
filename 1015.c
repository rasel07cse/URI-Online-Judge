
#include<stdio.h>
#include<math.h>

int main(){

    double w,x,y,z;

    scanf("%lf %lf",&w,&y);
    scanf("%lf %lf",&x,&z);

    double a = sqrt((x-w)*(x-w)+(z-y)*(z-y));

    printf("%.4lf\n",a);

    return 0;
}

