#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
scanf("%s",a);
int m,i,j,flag=0;
m=strlen(a);
for(i=0,j=m-1;i<=m/2;i++,j--)
{
if(a[i]!=a[j])
{
flag=1;
printf("\nnot a palindrome");
}
}
if(flag==0)
{
printf("\npalindrome");
}
return 0;
}
