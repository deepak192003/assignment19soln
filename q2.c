// Write a program to sort 10 city names stored in two dimensional arrays, taken from 
// the user
#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][20],t[20];
    printf("Enter strings one by one:");
    int i;
    for(i=0;i<3;i++)
    {
        gets(str[i]);
    }
    int j;
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(t,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],t);
            }
        }
    }
    printf("In dictinoary order");
    for(i=0;i<3;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}