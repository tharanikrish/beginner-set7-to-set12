#include<stdio.h>
int main()
{
int n,l,r;
scanf("%d%d%d",&n,&l,&r);
if((n>l)&&(n<r))
{
printf("\nnumer is present between the two numbers");
}
else
printf("\nno");
return 0;
}
