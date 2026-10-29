//DISPALEMENT(s=ut+1/2at^2)
#include<stdio.h>


float main()
{
    float s,u,a,t;//variable declaration
    printf("u:");
    scanf("%f",&u);
    printf("a:");
    scanf("%f",&a);
    printf("t:");
    scanf("%f",&t);
    s=(u*t)+0.5*(a*t*t);
    printf("the displacement is %f",s);
}

