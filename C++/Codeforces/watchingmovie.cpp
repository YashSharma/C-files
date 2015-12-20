#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
int main()
{   int64_t n,x,a[51][2],i,total=0;
    scanf("%"PRId64"%"PRId64,&n,&x);
    a[0][0]=0; a[0][1]=0;
    for(i=1;i<=n;i++)
    {   scanf("%"PRId64"%"PRId64,&a[i][0],&a[i][1]);
        total+=(a[i][1]-a[i][0]+1)+((a[i][0]-a[i-1][1]-1)%x);
    }
    printf("%"PRId64"\n",total);
    return 0;
}