#include<iostream>
int main()
{   unsigned long long i,count,a,t;
    scanf("%llu",&t);
    while(t--)
    {   count=0;
        scanf("%llu",&a);
     if(a%2)
         count=(a-1)*(a-1)/(4);
     else
         count=(a-2)*(a-2)/(4);
     count=count%a;
     printf("%llu\n",count);
    }
    return 0;
}