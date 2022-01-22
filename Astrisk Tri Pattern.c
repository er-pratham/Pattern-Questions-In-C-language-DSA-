#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Astrisk Tri Pattern\n");
    int lines;
    printf("Enter the number of lines: ");
    scanf("%d", &lines);
    for (int index = 0; index < lines; index++)
    {
        for (int index2 = 0; index2 < index; index2++)
        {
            printf(" ");
        }
        for (int index3 = 1; index3 <= lines - index; index3++)
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