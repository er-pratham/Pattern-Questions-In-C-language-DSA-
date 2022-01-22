#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("123 456 Pattern Printer:-\n");
    int a;
    printf("How much lines you wanna print: ");
    scanf("%d", &a);
    printf("This Will Print Series Upto The Number And The Nearest multiple of 3\n");
    for (int index = 1; index <= a; index=index+2)
    {
        for (int index2 = index; index2 <= index+2; index2++)
        {
            printf("%d\t",index2);
        }
        printf("\n");
    }
    int count=1;
    printf("This Code Will Print Square Matrix\n");
    for(int index=1;index<=a;index++)
    {
        for (int i = 1; i <= a; i++)
        {
            printf("%d\t",count);
            count+=1;
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