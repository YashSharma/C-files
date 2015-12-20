#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
int main()
{   long long n,m,i;
    scanf("%"PRId64,&n);
    long long a[n],s[n+1];
    s[0]=0;
    for(i=0;i<n;i++)
    {   scanf("%"PRId64,&a[i]); 
        s[i+1]=a[i]+s[i];
    }
    scanf("%"PRId64,&m);
    long long q[m],start,end,mid;
    for(i=0;i<m;i++)
    {   scanf("%"PRId64,&q[i]);
        start=1; end=n;
        while(start<=end)
        {   mid=(start+end)/2;
            if(q[i]>s[mid])
            {  start=mid+1;
            }else 
            {   end=mid-1;
            }
        }
        printf("%"PRId64,start);
        printf("\n");
    }
    return 0;
}