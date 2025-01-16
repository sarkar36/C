#include<stdio.h>
int main()
{
    double A,B,C,rec,cir,trap,squ,rec1;
    scanf("%lf%lf%lf",&A,&B,&C);
    double pi=3.14159;
    rec=A*C*0.5;
    cir=C*pi*C;
    trap=0.5*C*(A+B);
    squ=B*B;
    rec1=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRECTANGULO: %.3lf\n",rec,cir,trap,squ,rec1);
    return 0;
}

