#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<algorithm>
using namespace std;
int main()
{   int64_t n,i,h=0;
    scanf("%"PRId64,&n);
    pair<int64_t,int64_t>a[5050];
    for(i=0;i<n;i++)
    {   scanf("%"PRId64"%"PRId64,&a[i].first,&a[i].second);
    }
    sort(a,a+n);
    for(i=1;i<n;i++)
    {   if(a[i].second<a[i-1].second)
        {   h=1;
        }
        if(a[i].second>=a[i-1].first && h)
        {   h=0;
        }
    }
    if(h)
        printf("%"PRId64"\n",a[n-1].first);
    else
        printf("%"PRId64"\n",a[n-1].second);
    return 0;
}