#include<stdio.h>
#include<conio.h>
void main()
{
    start:
    printf("Welcome To Our Program:-\n");
    int num;
    printf("How much lines of this pattern you wanna print: ");
    scanf("%d",&num);
    for(int index=1;index<=num;index++)
    {
        for(int index2=1;index2<=index;index2++)
        {
            printf("%d",index2);
        }
        printf("\n");
    }
    char permit;
    printf("If You Wanna Use This Program Again.Press Y: ");
    scanf("%c",&permit);
    if(permit=='Y' || permit=='y')
    {
        printf("Redirecting To Program Again:\n");
        goto start;
    }
    else 
    {
        printf("Thanks for using our program.Developed By Er Pratham Saxena");
    }
    getch();
}