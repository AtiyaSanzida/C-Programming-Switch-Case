#include<stdio.h>

int main()
{
    int x,y,s,c,a;
    char ch;
    printf("Enter the Direction: ");
    scanf("%c", &ch);
    printf("Enter current coordinate(x and y positions): ");
    scanf("%d %d", &x,&y);
    printf("Enter no.units towards direction: ");
    scanf("%d",&s);


    switch (ch)
    {
    case 'N':
    case 'n':
        printf("New coordinate (x,y) : %d,%d\n",x,a);
        break;
    case 'S':
    case 's':
        printf("New coordinate (x,y) : %d,%d\n",x,a);
        break;
    case 'E':
    case 'e':
        printf("New coordinate (x,y) : %d,%d\n",y,a);
        break;
    case 'W':
    case 'w':
        printf("New coordinate (x,y) : %d,%d\n",y,a);
        break;

    default:
        printf("Error!!This is not a correct sign");
    }
    return 0;

}
