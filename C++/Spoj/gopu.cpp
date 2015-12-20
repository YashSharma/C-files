#include<iostream>
int main()
{   unsigned long long t,n,x,div;
    scanf("%llu",&t);
    while(t--)
    {   scanf("%llu",&n);
        do{
        x=n;    div=0;
        while(x)
        {   div+=(x%10);
            x/=10;
        }
        }while(n++%div);
    printf("%llu\n",n-1);
    }
    return 0;
}