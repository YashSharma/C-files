#include<iostream>
#include<stdio.h>
int max(int a, int b)
{   if(a>b)
        return a;
    else
        return b;
}
int main()
{   int n,a,b,cap=0,x=0;   
    scanf("%d",&n);
    while(n--)
    {   scanf("%d %d",&a,&b);
        x=x-a+b;
        cap=max(cap,x);
    }
    printf("%d\n",cap);
    return 0;
}