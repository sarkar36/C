#include<stdio.h>
int main()
{
    float a,b,c,d;
    float m,n;
    scanf("%f %f %f",&a,&b,&m);
    scanf("%f %f %f",&c,&d,&n);
    printf("VALOR A PAGAR: R$ %.2f",(b*m)+(d*n));
    return 0;
}


