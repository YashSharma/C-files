#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
static int a[100],b[100],c[100];
int main()
{   int n,k,i=0,count=0,sum=0;
    pair<int,int >p[102];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {   scanf("%d",&p[i].first);
        p[i].second=i+1;
    }
    sort(p,p+n);
    i=0;
    for(i=0;i<n;i++)
    {
    if(k>=p[i].first)
    {   k-=p[i].first;
        count++;
    }else
        break;
    }
    printf("%d\n",count);
    for(i=0;i<count;i++)
    {   printf("%d ",p[i].second);
        if(i==count-1)
            printf("\n");
    }
    
    return 0;
}   