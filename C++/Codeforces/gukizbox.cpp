#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
using namespace std;
int main()
{   uint64_t n,m,t=1,i;
    scanf("%"PRIu64"%"PRIu64,&n,&m);
    uint64_t a[n],num[n];
    
    for(i=0;i<n;i++)
    { scanf("%"PRIu64,&a[i]);
        num[i]=0;
    }
    num[0]=m;
    while(a[n-1]!=0)
    {   t++;
        for(i=0;i<n;i++)
        {   if(a[i]==0 || num[i]==0)
                continue;  
        if(a[i]<num[i])
        {   a[i]=0;
            num[i+1]=num[i]-a[i];
        }else
        {  a[i]=a[i]-num[i];
        }
        }
        for(i=0;i<n;i++)
        {   if(a[i]==0)
            {   if(num[i]!=0)
                    num[i+1]=num[i];
            }
        }
        cout<<t<<"seconds\n";
         for(i=0;i<n;i++)
         {  cout<<i<<a[i]<<endl;
         }
    }
    printf("%"PRIu64,t);
    printf("\n");
    return 0;
}