#include<stdio.h>

int main()
{
    int n,i,sum;
printf("enter the number");
scanf("%d",&n); 

sum=0;

for(i=1;i<n;i++)
{
    if(n%i==0)
    {
     sum=sum+i;
    }
}

if(sum==n)
{
    printf("%d number is perfect number",n);
}
else{
printf("%d is NOT perfect no ",n);
}
}