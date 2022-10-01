// Write a program to find the number of vowels in each of the 5 strings stored in two 
// dimensional arrays, taken from the user.
#include<stdio.h>
int main()
{
    char str[3][20];
    int i,j;
    printf("Enter string:");
    for( i=0;i<3;i++)
    {
        gets(str[i]);
    }
    int vowels=0;
    for(i=0;i<3;i++)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
            if( str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U'){
                 vowels++;
            }
           
           
        }
         printf("%s=%d",str[i],vowels);
            vowels=0;
    }
}