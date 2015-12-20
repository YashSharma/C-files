#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
#include<algorithm>
using namespace std;
int main()
{   double n,w;
    int64_t i;
    scanf("%lf %lf",&n,&w);
    double cap[2*(int)n];
    double mib,mig,x,girl,boy,total;
    for(i=0;i<2*(int)n;i++)
    {   scanf("%lf",&cap[i]);
    }
    sort(cap,cap+2*(int)n);
    mib=cap[(int)n];
    mig=cap[0];
    x=(2*w)/(3*n);
    if(x>mib)
    {   boy=mib;
        girl=mib/2.0;
        if(girl>mig)
        {   girl=mig;
            boy=2.0*mig;
        }   
    }else
    {   boy=x;
        girl=x/2.0;
        if(girl>mig)
        {   girl=mig;
            boy=2.0*mig;
        }   
    }
    total=n*boy+n*girl;
    printf("%lf\n",total);
    return 0;
}