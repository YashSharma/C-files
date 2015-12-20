#include<iostream>
#include<stdlib.h>
int main()
{   unsigned long long t,n1,n2,i,j,min;
    long long dif;
    scanf("%llu",&t);
    while(t--)
    {   min=1000000;
        scanf("%llu",&n1);   
        unsigned long long a[n1];
        for(i=0;i<n1;i++)
        {   scanf("%llu",&a[i]);
        }
        scanf("%llu",&n2);
        unsigned long long b[n2];
        for(i=0;i<n2;i++)
        {   scanf("%llu",&b[i]);
            for(j=0;j<n1;j++)
            {   dif=a[j]-b[i];
                if(llabs(dif)<=min)
                min=llabs(dif);
            }
        }
        printf("%llu\n",min);
    }
    return 0;
}