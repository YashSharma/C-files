#include<iostream>
int main()
{   double n,sum,i;
    int count;
    scanf("%lf",&n);
    while(n!=0.00)
    {   count=0;
        sum=0;
        i=2.00;
        while(sum<n)
        {   sum=sum+(1/i++);
            count++;
        }
        printf("%d card(s)\n",count);
        scanf("%lf",&n);
    }
}