#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<algorithm>
using namespace std;
int main()
{   double l,dif,max;
    int n,i;
    scanf("%d %lf",&n,&l);
    max=0;
    double a[n];
    for(i=0;i<n;i++)
    {   scanf("%lf",&a[i]);
    }
    sort(a,a+n);
    for(i=1;i<n;i++)
    {   dif=a[i]-a[i-1];
        if((dif/2)>max)
        {   max=dif/2;
        }
    }
    if(l-a[n-1]>max)
        max=l-a[n-1];
    if(a[0]-0>max)
        max=a[0]-0;
    printf("%.10f\n",max);
    return 0;
}