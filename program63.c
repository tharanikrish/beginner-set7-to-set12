#include<stdio.h>
int main()
{
char a[20];
scanf("%s",a);
int i,count=0;
if((a[i]==' ')||(a[i]=='\0'))
{
count++;
}
printf("\n%d",count);
return 0;
}
