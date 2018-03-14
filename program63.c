#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
gets(a);
int i,count=1;
  for(i=0;a[i]!=NULL;i++)
  {
if(a[i]==' ')
{
count=count+1;
}
  }
printf("\n%d",count);
return 0;
}
