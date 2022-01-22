#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Pattern Printer:-\n");
    int columns;
    printf("Enter number of columns: ");
    scanf("%d", &columns);
    for (int index = 1; index <= columns; index++)
    {
        for (int index2 = 0; index2 <= index - 1; index2++)
        {
            printf("%d\t", index + index2);
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