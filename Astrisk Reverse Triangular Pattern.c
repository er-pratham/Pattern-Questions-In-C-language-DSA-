#include<stdio.h>
#include<conio.h>
void main()
{
    start:
    printf("Revrese Astrisk Triangle:\n");
    int lines;
    printf("Enter number of lines: ");
    scanf("%d",&lines);
    for(int index=0;index<lines;index++)
    {
        for(int index2=1;index2<=lines-index;index2++)
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