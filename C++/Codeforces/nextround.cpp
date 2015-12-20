#include<iostream>
#include<stdio.h>
int main()
{   int n,k,i;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {   
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {   if(a[i]>=a[k-1] && a[i]>0)
            break;
    }
    printf("%d\n",i+1);
    return 0;
}