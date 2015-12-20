#include<iostream>
#include<math.h>
int main()
{   unsigned long long i,n,count;
    scanf("%llu",&n);
    count=n;
    while(n)
    {   for(i=2;i<=sqrt(n);i++)
        {   if(!(n%i))
                ++count;
        }
      n--;
    }
    printf("%llu\n",count);
    return 0;
}