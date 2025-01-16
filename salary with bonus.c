#include<stdio.h>
int main()
{
    char a[50];
    double b,c,TOTAL;
    scanf("%s",&a);
    scanf("%lf%lf",&b,&c);
    TOTAL=b+(c*0.15);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}

