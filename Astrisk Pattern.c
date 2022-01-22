#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Alphabetical Pattern Printer:-\n");
    int lines;
    printf("Enter the number Of lines you wanna print (make sure 1<=lines<=26): ");
    scanf("%d", &lines);
    for (int index = 1; index <= lines; index++)
    {
        for (int index2 = 1; index2 <= lines - index; index2++)
        {
            printf(" ");
        }
        for (int index3 = 1; index3 <= index; index3++)
        {
            printf("*");
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