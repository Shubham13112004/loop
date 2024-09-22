#include<stdio.h>

int main()
{
int n;
int i;
printf("enter the number:-");
scanf("%d",&n);
int fact=1;
i=1;
for(n=1;n<=10;n++)
{
while(i<=n)
{
 fact=fact*i;
 i++;
}
printf("%d factorial is %d\n",n,fact);

}
    return 0;
}