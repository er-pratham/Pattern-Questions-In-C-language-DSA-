#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Advance Number Pattern:-\n");
    int lines;
    printf("Enter The Number Of Lines: ");
    scanf("%d", &lines);
    for (int index = 1; index <= lines; index++)
    {
        for (int index2 = 0; index2 < lines - index; index2++)
        {
            printf(" ");
        }
        for (int index3 = 1; index3 <= index; index3++)
        {
            printf("%d",index3);
        }
        for(int index4=1;index4<index;index4++)
        {
            printf("%d",index-index4);
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