// Suppose we have a list of email addresses, check whether all email addresses have 
// ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20][50];
    
    int n;
    printf("How many email address you want to store: ");
    scanf("%d",&n);
    printf("Enter %d email address",n);
    int i;
    for(i=0;i<n;i++)
    {
        gets(s[i]);
    }
    printf("Invalid email id ");
    for(i=0;i<n;i++)
    {
        if(strchr(s[i],'@')==0)      //if @ is not found in email then if block runs
        {                              //if @ found in email then if block doesnt runs
            
            printf(" %s\n",s[i]);
        }
    }
}