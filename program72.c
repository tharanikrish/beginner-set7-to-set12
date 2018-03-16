#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
scanf("%s",a);
int m,i;
m=strlen(a);
for(i=0;i<m;i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
{
printf("\nvowel is present");
break;
}
}
return 0;
}
