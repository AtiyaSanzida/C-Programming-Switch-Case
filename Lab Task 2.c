#include <stdio.h>

int main()
{
    char operator;
    float a, b;
    printf("Enter the operator(+,-,* or /):");
    scanf("%c", &operator);
    printf("Enter the numbers :");
    scanf("%f %f ", &a, &b);

    switch (operator){
   case '+':
       printf("%f + %f = %0.2f", a ,b, a+b);
       break;
        case '-':
       printf("%f - %f = %0.2f", a ,b, a-b);
       break;
        case '*':
       printf("%f * %f = %0.2f", a ,b, a*b);
       break;
        case '/':
       printf("%f / %f = %0.2f", a ,b, a/b);
       break;
        default:
            printf("Error!Operator is not correct");

    }

    return 0;
}
