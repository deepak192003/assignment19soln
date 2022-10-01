// Write a program that asks the user to enter a username. If the username entered is 
// one of the names in the list then the user is allowed to calculate the factorial of a 
// number. Otherwise, an error message is displayed
#include<stdio.h>
#include<string.h>
int factorial( int n);
int main()
{
    int n,flag;
    int fact;
    char names[10][20];
    int i;
    printf("Enter usernames: ");
    for(i=0;i<3;i++)
    {
        fgets(names[i],20,stdin);
    }
    char name[20];
    printf("Enter your name : ");
    fgets(name,20,stdin);
    for(i=0;i<3;i++)
    {
        if(strcmp(names[i],name)==0)
        {
             flag=1;
        }
    }
    if( flag==1)
    {
        printf("Enter a number to calculate factorial: ");
            scanf("%d",&n);
            fact=factorial(n);
            printf("Factorial of a number is %d",fact);
    }
    else
    {
        printf("Error!!");
    }
return 0;
}
int factorial( int n)
{
    int f=1;
    int i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}