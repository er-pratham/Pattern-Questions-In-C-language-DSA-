#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Reverse Number Printer:-\n");
    int a;
    printf("How Many Lines You Wanna Print: ");
    scanf("%d", &a);
    printf("Following:-\n");
    for (int index = 1; index <= a; index++)
    {
        for (int index2 = 1; index2 <= a; index2++)
        {
            printf("%d\t", a-index2+1);
        }
        printf("\n");
    }
     char permit;
    printf("If You Wanna Use This Program Again.Press Y: ");
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
    }getch();
}