#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<string.h>
using namespace std;
static int64_t s[100001],sum[100001];
static char a[100001];
 int64_t n,m,c[2],i,j;
void precompute()
{   for(i=0;i<n-1;i++)
{   if(a[i]==a[i+1])
        s[i]=1;
    else
        s[i]=0;
}
sum[0]=s[0];
for(i=1;i<n-1;i++)
{   sum[i]=s[i]+sum[i-1];
}
}
int main()
{   cin>>a;
    n=strlen(a);
    precompute();
    scanf("%"PRId64,&m);
    for(i=0;i<m;i++)
    {   scanf("%"PRId64"%"PRId64,&c[0],&c[1]);
        if(c[0]>1)
        printf("%"PRId64"\n",sum[c[1]-2]-sum[c[0]-2]);
        else
        printf("%"PRId64"\n",sum[c[1]-2]);
            
    }
    return 0;
}