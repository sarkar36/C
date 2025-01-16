#include<stdio.h>
int main()
{
    int a,b,s,X;
    scanf("%d%d%d",&a,&b,&s);
    X=(a+b+abs(a-b))/2;
    if(a>X)
    {
        printf("%d eh o maior\n",a);
    }
    else if(b>X)
    {
        printf("%d eh o maior\n",b);
    }
    else if(s>X)
    {
        printf("%d eh o maior\n",s);
    }
    else if(X=X)
    {
        printf("%d eh o maior\n",X);
    }
    return 0;
}

