#include <stdio.h>
void main()
{
int n, i;
int f=1;
printf("Enter an integer:");
scanf("%d",&n);
if (n<0)
{
printf("1");
}
else
{
for(i=1;i<=n;++i)
{
f*=i;
}
printf("\n%d", f);
}
}
