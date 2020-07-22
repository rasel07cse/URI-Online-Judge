#include <stdio.h>

int main()
{
    int h1, m1, h2, m2;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    int hh1 = h1*60+m1;
    int hh2 = h2*60+m2;
    int hh;
    int diff = hh2 - hh1;
    if(diff > 24*60)
        diff -= 24*60;

    if(diff <= 0)
      diff = 24*60 - diff;
    hh = diff/60;
    int mm = diff%60;


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hh, mm);

    return 0;
}
