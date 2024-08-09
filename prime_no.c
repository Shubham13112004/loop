#include<stdio.h>

int main()
{

int n,i;

printf("enter a number");
scanf("%d",&n);

for(i=2;i<n;i++)
{
    if(n%i==0)
    {
        break;
    }

}

if(n==i)
{
    printf("%d number is prime",n);
}
else{
    printf("%d number is NOT prime",n);
}


}