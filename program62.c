#include<stdio.h>
#include<string.h>
int main()
{
char a[15];
scanf("%s",a);
  int i,n,flag=0;
  n=strlen(a);
  for(i=0;i<n;i++)
  {
if((a[i]=='1')||(a[i]=='0'))
{
flag=1;
}
else
{
  flag=0;break;
}
  }
  if(flag==1)
    printf("\nyes");
  else
    printf("\nno");
return 0;
}
