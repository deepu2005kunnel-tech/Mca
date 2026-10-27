#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int choice, i, j, k;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n----- MATRIX MENU -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
           
            if(r1 != r2 || c1 != c2)
            {
                printf("Addition not possible.\n");
                break;
            }

            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    result[i][j] = a[i][j] + b[i][j];
                }
            }

            printf("Addition:\n");
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                    printf("%d ", result[i][j]);

                printf("\n");
            }
            break;

        case 2:
            
            if(r1 != r2 || c1 != c2)
            {
                printf("Subtraction not possible.\n");
                break;
            }

            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                {
                    result[i][j] = a[i][j] - b[i][j];
                }
            }

            printf("Subtraction:\n");
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c1; j++)
                    printf("%d ", result[i][j]);

                printf("\n");
            }
            break;

        case 3:
          

            if(c1 != r2)
            {
                printf("Multiplication not possible.\n");
                break;
            }

       
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c2; j++)
                {
                    result[i][j] = 0;

                    for(k = 0; k < c1; k++)
                    {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            printf("Multiplication:\n");
            for(i = 0; i < r1; i++)
            {
                for(j = 0; j < c2; j++)
                    printf("%d ", result[i][j]);

                printf("\n");
            }
            break;

        case 4:
            printf("Transpose:\n");

            for(i = 0; i < c1; i++)
            {
                for(j = 0; j < r1; j++)
                {
                    printf("%d ", a[j][i]);
                }

                printf("\n");
            }
            break;

        case 5:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

