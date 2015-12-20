#include<iostream>
int main()
{   unsigned long long t,n;
    scanf("%llu",&t);
    while(t--)
    {   scanf("%llu",&n);
        if(n%2)
            printf("Sorry Shaktiman\n");
        else
            printf("Thankyou Shaktiman\n");
    }
    return 0;
}