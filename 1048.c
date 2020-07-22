#include<stdio.h>
int main()
{
    float salary,ns,r,em;
    scanf("%f",&salary);
    if(salary>=0 && salary<=400.00){
        r = (salary*15)/100;
        ns=salary+r;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",r);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary>=400.01 && salary<=800.00){
        r = (salary*12)/100;
        ns=salary+r;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",r);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary>=800.01 && salary<=1200.00){
        r = (salary*10)/100;
        ns=salary+r;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",r);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>=1200.01 && salary<=2000.00){
        r = (salary*7)/100;
        ns=salary+r;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",r);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary>2000){
        r = (salary*4)/100;
        ns=salary+r;
        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",r);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
