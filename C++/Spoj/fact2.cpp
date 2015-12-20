#include<iostream>
int main()
{   int a,b,n[0];
    scanf("%d",&a);
    while(a>0)
    {   scanf("%lu",&b);
        n=1;
        while(b>1)
        { n*=b; b--;}
        printf("%lu\n",n);
        a--;
    }
    return 0;
}