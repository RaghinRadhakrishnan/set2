#include<stdio.h>
void main()
{
int a,b,i,c;
printf("enter the number",a);
scanf("%d",&a);
printf("enter the number",b);
scanf("%d",&b);
for(i=a;i<=b;++i)
{
c=i%2;
if(c==0)
printf("%d\n",i);
}
}
