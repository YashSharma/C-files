#include<iostream>
int main()
{ long long t,n,max,i,k;
    scanf("%lld",&t);
    while(t--)
    {   scanf("%lld",&n);
        max=0;
        unsigned long long a[n][2];
        for(i=0;i<n;i++)
        {   scanf("%llu %llu",&a[i][0],&a[i][1]);
            if(a[i][0]>max)
            {   max=a[i][0];
                k=i+1;    }
        }
        for(i=0;i<n;i++)
        { if(a[i][1]>=max && k!=(i+1))
            { k=-1;
                break;
            }
        }
        printf("%lld\n",k);
    }
    return 0;
}