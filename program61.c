#include<stdio.h>
int main()
{
int k,i;
char s[10];
printf("\nenter the number:");
scanf("%d",&k);
printf("\nenter the string:\n");
scanf("%s",s);
for(i=0;i<k;i++)
{
printf("%c",s[i]);
}
return 0;
}
