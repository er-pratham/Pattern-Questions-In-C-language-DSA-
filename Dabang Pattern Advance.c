#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Advance Dabang Pattern:-\n");
    int lines;
    printf("Enter The Number Of Lines: ");
    scanf("%d", &lines);
    for (int index = 0; index < lines; index++)
    {
        for (int index2 = 1; index2 <= lines - index; index2++)
        {
            printf("%d", index2);
        }
        for (int index3 = 0; index3 < index; index3++)
        {
            printf("**");
        }
        for (int index4 = 0; index4 <= lines - index - 1; index4++)
        {
            printf("%d", lines - index - index4);
        }
        printf("\n");
    }
    char permit;
    printf("\nIf You Wanna Use This Program Again.Press Y: ");
    getchar();
    scanf("%c", &permit);
    if (permit == 'Y' || permit == 'y')
    {
        printf("Redirecting To Program Again\n");
        goto start;
    }
    else
    {
        printf("Thanks for using our program.\nDeveloped by Er Pratham Saxena");
    }

    getch();
}
