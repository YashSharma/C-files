#include<iostream>
#include<stdio.h>
int main()
{   int n,k;
    scanf("%d %d",&n,&k);
    int a[n],i;
    for(i=0;i<n-1;i++)
    {   scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i=i+a[i-1])
    {   if(i==k)
        {   printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}