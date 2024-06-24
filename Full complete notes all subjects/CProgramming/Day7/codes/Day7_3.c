#include <stdio.h>
#include <stdio.h>
//menu-driven programming 
int main()
{
    enum operations 
    {
        ADD=1,SUB,MULT,DIV 
    }; 

    int num1, num2, ans;
    enum operations choice;

    do
    {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");

        printf("\nEnter the 2 int numbers::");
        scanf("%d%d", &num1, &num2);

        printf("\nEnter the choice::");
        scanf("%d", &choice);

        switch (choice)
        {
        case ADD:
            ans = num1 + num2;
            //printf("ans = %d", ans);
            break;
        case SUB:
            ans = num1 - num2;
            //printf("ans = %d", ans);
            break;
        case MULT:
            ans = num1 * num2;
            //printf("ans = %d", ans);
            break;
        case DIV:
            ans = num1 / num2;
            //printf("ans = %d", ans);
            break;

        default:
            printf("Invalid choice "); 
            break;
        }//end of switch 
        printf("ans = %d\n", ans);
        printf("0 to exit and non-zero to continue"); 
        scanf("%d",&choice);//0 
    }while(choice!=0);//end of while  
    return 0;
}

// int main()
// {
//     int num1, num2, ans;
//     int choice;

//     printf("1.Addition\n");
//     printf("2.Subtraction\n");
//     printf("3.Multiplication\n");
//     printf("4.Division\n");

//     printf("\nEnter the 2 int numbers::");
//     scanf("%d%d", &num1, &num2);

//     printf("\nEnter the choice::");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case 1:
//         ans = num1 + num2;
//         //printf("ans = %d", ans);
//         break;
//     case 2:
//         ans = num1 - num2;
//         //printf("ans = %d", ans);
//         break;
//     case 3:
//         ans = num1 * num2;
//         //printf("ans = %d", ans);
//         break;
//     case 4:
//         ans = num1 / num2;
//         //printf("ans = %d", ans);
//         break;

//     default:
//         printf("Invalid choice "); 
//         break;
//     }
//     printf("ans = %d", ans);

//     return 0;
// }

// int main()
// {
//     enum operations 
//     {
//         ADD=1,SUB,MULT,DIV 
//     }; 

//     int num1, num2, ans;
//     enum operations choice;

//     printf("1.Addition\n");
//     printf("2.Subtraction\n");
//     printf("3.Multiplication\n");
//     printf("4.Division\n");

//     printf("\nEnter the 2 int numbers::");
//     scanf("%d%d", &num1, &num2);

//     printf("\nEnter the choice::");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case ADD:
//         ans = num1 + num2;
//         //printf("ans = %d", ans);
//         break;
//     case SUB:
//         ans = num1 - num2;
//         //printf("ans = %d", ans);
//         break;
//     case MULT:
//         ans = num1 * num2;
//         //printf("ans = %d", ans);
//         break;
//     case DIV:
//         ans = num1 / num2;
//         //printf("ans = %d", ans);
//         break;

//     default:
//         printf("Invalid choice "); 
//         break;
//     }
//     printf("ans = %d", ans);

//     return 0;
// }

// int main()
// {
//     int num1, num2, ans;
//     int choice;

//     printf("1.Addition\n");
//     printf("2.Subtraction\n");
//     printf("3.Multiplication\n");
//     printf("4.Division\n");

//     printf("\nEnter the 2 int numbers::");
//     scanf("%d%d", &num1, &num2);

//     printf("\nEnter the choice::");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case 1:
//         ans = num1 + num2;
//         //printf("ans = %d", ans);
//         break;
//     case 2:
//         ans = num1 - num2;
//         //printf("ans = %d", ans);
//         break;
//     case 3:
//         ans = num1 * num2;
//         //printf("ans = %d", ans);
//         break;
//     case 4:
//         ans = num1 / num2;
//         //printf("ans = %d", ans);
//         break;

//     default:
//         printf("Invalid choice "); 
//         break;
//     }
//     printf("ans = %d", ans);

//     return 0;
// }