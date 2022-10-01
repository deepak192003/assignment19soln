// Create an authentication system. It should be menu driven
#include<stdio.h>
#include<string.h>
int main()
{
int flag=0;
    char s[3][2][20]={ {"Deepak","deepak@123"},{ "vivek","vivek@123"},{"vaibhav","vaibhav@123"}};
   char username[20];
   fgets( username,20,stdin);
   char password[20];
   fgets(password,20,stdin);
int i;

for(i=0;i<3;i++)
{
    if( strcmp( username,s[i][0])==0 && strcmp(password,s[i][1])==0)
    {
     flag=1;
    }
}
if(flag==1)
{
    printf("User successfully login");
}
else
{
    printf("Username and password not match");
}
return 0;
}