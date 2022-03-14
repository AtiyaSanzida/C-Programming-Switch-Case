#include <stdio.h>

int main()

{
    char ch;
    printf("Enter the First word of any fruit: ");
    scanf("%C",&ch);

    switch(ch)
    {
    case 'm':
        printf(" Mango ----- TK.500/kg");
        break;
    case 'a':
        printf("Apple ----- TK.250/kg" );
        break;
    case 'b':
        printf("Banana ----- TK.130/kg" );
        break;
    case 'c':
        printf(" Cherry ----- TK.270/kg" );
        break;
    default:
        printf("invalid input");
    }
    return 0;
}
