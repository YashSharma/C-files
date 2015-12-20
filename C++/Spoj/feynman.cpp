#include<iostream>
int main()
{   int n,total;
    scanf("%d",&n);
    while(n!=0)
    {   total=((n)*(n+1)*(2*n+1))/6;
        printf("%d\n",total);
        scanf("%d",&n);
    }
    return 0;
}