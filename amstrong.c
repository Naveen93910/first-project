#include<stdio.h>
#include<math.h>
void main()
{
    int n,t,sum=0,digit=0;
    int rem;
    printf("enter number");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {

        digit++;
        t=t/10;
    }
    t=n;
    while(t!=0)
    {
        rem=t%10;
        sum=sum+pow(rem,digit);
        t=t/10;

    }
    if(n==sum)
    {
        printf("%d is an amstromg number",n);
    }
    else
    {
        printf("%d is not amstrong",n);
    }

}


