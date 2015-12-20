#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   long long int t,n,k,i,nn;
    scanf("%lld",&t);
    while(t--)
    {   nn=0;
        int pos=1;
        scanf("%lld %lld",&n,&k);
        long long int a[n],sum=0;
        for(i=0;i<n;i++)
        { scanf("%lld",&a[i]);}
        for(i=0;i<n;i++)
        {   if(a[i]>-1)
                break;
            nn++;
        }
        if(nn>=k)
        {   for(i=0;i<k;i++)
                a[i]*=(-1);
            k=0;
        }else
        {   k=k-nn;
            i=0;
            while(a[i]<1)
            {   a[i]=a[i]*(-1);
                i++;
                pos=i;
            }
            k=k%2;
        }
        sort(a,a+n);
        if(k)
        {  a[0]=-a[0];
        }
        for(i=0;i<n;i++)
        {  
            sum+=a[i];
        }
        printf("%lld\n",sum);
    }
 
    return 0;
}