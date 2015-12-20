#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<algorithm>
using namespace std;
int main()
{   int64_t n,x,total=0,i;
    scanf("%"PRId64"%"PRId64,&n,&x);
    int64_t a[n];
    for(i=0;i<n;i++)
    {   scanf("%"PRId64,&a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {   total+=(a[i]*x);
        if(x>1)
            x=x-1;
    }
    printf("%"PRId64"\n",total);
    return 0;
}