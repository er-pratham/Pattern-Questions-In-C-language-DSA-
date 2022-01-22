#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("1 2 3 4 Pattern Printer:-\n");
    int a;
    printf("How Much Columns You Wanna Print: ");
    scanf("%d", &a);
    for (int index = 0; index < a; index++)
    {
        for (int index2 = 1; index2 < 5; index2++)
        {
            printf("%d\t", index2);
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