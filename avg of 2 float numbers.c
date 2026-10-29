//AVERAGE OF TWO FLOAT NUMBERS
#include <stdio.h>
#include<math.h>

int main()
{
    float num1,num2,average;//variable declaration
    printf("enter num1:");
    scanf("%f",&num1);
    printf("enter num2:");
    scanf("%f",&num2);
    average=(num1+num2)/2;
    printf("average is %f",average);
    return 0;
}

