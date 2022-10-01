// From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
int main()
{
    char ip[10][30];
    printf("Enter ip address:\n");
    int i;
    for(i=0;i<3;i++)
    {
        fgets(ip[i],30,stdin);
    }
    printf("Valid ip address : \n");
    for(i=0;i<3;i++)
    {
        char *ip=strtok(ip,".");
        while ( ip!=NULL)
        {
           int x=atoi(ip);
           if((x>=0 && x<=255))
           {
                printf("%s",ip[i]);
           }
        }
        
    }
}