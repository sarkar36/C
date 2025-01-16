#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,d,y;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    d=pow((x2-x1),2)+pow((y2-y1),2);
    y=sqrt(d);
    printf("%.4lf\n",y);
    return 0;
}

