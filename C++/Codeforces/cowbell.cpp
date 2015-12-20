#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    int64_t n,k;
    scanf("%"PRId64"%"PRId64,&n,&k);
    int64_t s[n];
    vector<int64_t>sn;
    for(int64_t i=0;i<n;i++)
    {
        scanf("%"PRId64,&s[i]);
    }
    int64_t i;
    int dif=2*k-n;
    for(i=0;i<(n-dif)/2;i++)
    {
        sn.push_back(s[i]+s[n-dif-1-i]);
    }
    for(i=n-dif;i<n;i++)
    {
        sn.push_back(s[i]);
    }
    int64_t size=sn.size();
    int64_t ans=0;
    for(i=0;i<size;i++)
    {
        if(ans<sn[i])
            ans=sn[i];
    }
    printf("%"PRId64"\n",ans);
    return 0;
}