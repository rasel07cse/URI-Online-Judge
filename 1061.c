#include<stdio.h>
int main()
{
    int d,h,m,s,dd,hh,mm,ss,ddd,hhh,mmm,sss;
    printf("Dia ");
    scanf("%d",&d);
    scanf("%d",&h);
    printf(" : ");
    scanf("%d",&m);
    printf(" : ");
    scanf("%d",&s);
    printf("Dia ");
    scanf("%d\n",&dd);
    scanf("%d",&hh);
    printf(" : ");
    scanf("%d",&mm);
    printf(" : ");
    scanf("%d",&ss);

    /*printf("Dia ");
    scanf("%d",&d);
    scanf("%d:%d:%d\n",&h,&m,&s);
    printf("Dia ");
    scanf("%d\n",&dd);
    scanf("%d : %d : %d\n",&hh,&mm,&ss);*/

    int x,y,z,z1,xx,yy,zz,zz1,zzz,day,hour,minute,second;
    x=(d)*24;
    y=(h+x)*60;
    z=(m+y)*60;
    z1=z+s;
    xx=(dd)*24;
    yy=(hh+xx)*60;
    zz=(mm+yy)*60;
    zz1=zz+ss;
    zzz=(zz1-z1);
    day=(zzz/3600)/24;
    hour=(zzz/3600)%24;
    minute=(zzz/60)-(((day*24)*60)+(hour*60));
    second=(zzz)-(((day*24)*3600)+(hour*3600)+(minute*60));
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,hour,minute,second);

    return 0;
}
