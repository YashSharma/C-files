#include<iostream>
int main()
{   long long x,y,n;
    scanf("%lld",&n);
    while(n--)
    {   scanf("%lld %lld",&x,&y);
        if(y==x)
        {   if(x%2)
                printf("%lld\n",x*2-1);
            else
                printf("%lld\n",x*2);
        }
        else if(y==x-2)
        {   if(x%2)
                printf("%lld\n",y+x-1);
            else
                printf("%lld\n",y+x);
        }
        else
        { printf("No Number\n"); }
    }
    return 0;
}