#include<iostream>
int main()
{   unsigned long long n;
    scanf("%llu",&n);
    if(n%10)
    {   printf("1\n");
        printf("%llu\n",n%10);
    }else
    {   printf("2\n");
    }
    return 0;
}   