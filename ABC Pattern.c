#include<stdio.h>
#include<conio.h>
void main()
{
    start:
    printf("Alphabetical Pattern Printer:-\n");
    int lines;
    printf("Enter the number Of lines you wanna print (make sure 1<=lines<=26): ");
    scanf("%d", &lines);
    if (lines > 26)
    {
        printf("Sorry lines should be less than 26");
    }
    else
    {
        for (int index = 0; index < lines; index++)
        {
            for (int index2 = 0; index2 < lines; index2++)
            {
                printf("%c\t", 'A' + index2);
            }
            printf("\n");
        }
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