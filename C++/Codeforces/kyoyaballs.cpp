#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<cmath>
using namespace std;
int main()
{   int k,i,j;
    scanf("%d",&k);
    int64_t ans=1,sum,x,mul;
    int a[k];
    for(i=0;i<k;i++)
    {   scanf("%d",&a[i]);
    }
    i=k-1;
    while(i>0)
    {   sum=0;
        a[i]=a[i]-1;
        for(j=0;j<=i;j++)
        {   sum=sum+a[j];
        }
        if(a[i]>0)
        {  x=sum;
            while(x!=(sum-a[i]))
            {   ans=(ans*x);
                ans=ans%1000000007;
                x--;
            }
            cout<<ans<<endl;
            x=2;
            while(x<=a[i])
            {   ans=ans/x;
                x++;
            }
        }
        i--;
        ans=ans%1000000007;
    }
    printf("%"PRId64"\n",ans);
    return 0;
}