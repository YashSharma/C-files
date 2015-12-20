#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
using namespace std;
int main()
{   uint64_t n,m,time=0;
    scanf("%"PRIu64"%"PRIu64,&n,&m);
    uint64_t a[m+1],i;
    a[0]=1;
    for(i=1;i<=m;i++)
    {   scanf("%"PRIu64,&a[i]);
        if(a[i]>=a[i-1])
            time=time+(a[i]-a[i-1]);
        else 
        {   time=time+n-a[i-1]+a[i];
        }
    }
    printf("%"PRIu64,time);
    printf("\n");
    return 0;
}