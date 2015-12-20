#include<iostream>
#include<stdio.h>
int main()
{   int n,i;
    scanf("%d",&n);
    double a[n],sum;
    for(i=0;i<n;i++)
    {   scanf("%lf",&a[i]);
        sum+=a[i];
    }
    printf("%.12f\n",sum/n);
    return 0;
}   