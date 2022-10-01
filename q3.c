// Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the number of string");
    scanf("%d",&n);
    char str[n][20];
    printf("Enter string one by one: ");
    int i;
    for(i=0;i<n;i++)
    {
        fgets(str[i],20,stdin);
    }
    printf("You entered: ");
    for(i=0;i<n;i++)
    {
        printf("%s",str[i]);
    }
    return 0;
}