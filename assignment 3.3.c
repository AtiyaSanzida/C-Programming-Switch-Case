#include<stdio.h>

int main()

{
    int semester_no;
     printf("Enter the number of semester: ");
     scanf("%d",&semester_no);


         switch(semester_no)
         {
         case 0:
            printf("Invalid Semester");
            break;

         case 1:
         case 2:
         case 3:
             printf("Freshman");
             break;

         case 4:
         case 5:
         case 6:
            printf("Sophomore");
            break;

         case 7:
         case 8:
         case 9:
            printf("Junior");
            break;

         case 10:
         case 11:
         case 12:
            printf("Senior");
            break;

         default:
            printf("You must graduate soon");
            }

        return 0;


}
