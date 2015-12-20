#include<iostream>
#include<algorithm>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<cmath>
using namespace std;
int main()
{   int64_t n;
    scanf("%"PRId64,&n);
    int64_t a[n],i,max,j,count1,count2;
    for(i=0;i<n;i++)
    {   scanf("%"PRId64,&a[i]);
    }
    sort(a,a+n);
    count1=1;   
    count2=1;
    max=a[n-1]-a[0];
    i=1;
    while(a[i]==a[0])
    {   i++;
        count1++;
    }
    if(i==n)
    {   count1=(n*(n-1))/2;
        printf("%"PRId64" %"PRId64"\n",max,count1);
    }else
    {
    for(j=n-2;j>=i;j--)
    {   if(a[j]==a[n-1])
            count2++;
        else
            break; 
    }
    printf("%"PRId64" %"PRId64"\n",max,count1*count2);
    }return 0;
}