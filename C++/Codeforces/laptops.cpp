#include<iostream>
#include<algorithm>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
using namespace std;
int main()
{   int n,i;
    scanf("%d",&n);
    pair<int,int>a[100000];
    pair<int,int>b[100000];
    for(i=0;i<n;i++)
    {   scanf("%d %d",&a[i].first,&b[i].first);
        a[i].second=i+1;
        b[i].second=i+1;
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++)
    {   if(a[i].second!=b[i].second)
        {  printf("Happy Alex\n");
            return 0;
        }
    }
    printf("Poor Alex\n");
    return 0;
}