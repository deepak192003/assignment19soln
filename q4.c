// Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int flag;
   char str[20][30],s1[30];
   int n,i;
   printf("How many string you want to store");
   scanf("%d",&n);
   printf("Enter %d strings: ",n);
   for(i=0;i<n;i++)
   {
        fgets(str[i],30,stdin);
   }
   printf("Enter a string to search:");
  fgets(s1,30,stdin);
   for(i=0;i<n;i++)
   {
        if(strcmp(s1,str[i])==0)
        {
             flag=1;
        }
   }
   if(flag==1)
   {
        printf("String found");
   }
   else 
   {
    printf("String not found");
   }
   
}


