#include<stdio.h>

int main()
{
    int n,i,sum;
printf("enter the number");
scanf("%d",&n);

sum=0;

for(i=1;i<=n;i++)
{
    sum=sum+i;
}
// ex.no is 5
//1+2+3+4+5=15
printf("%d ",sum);

}