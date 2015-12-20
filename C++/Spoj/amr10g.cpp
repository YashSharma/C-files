#include<iostream>
#include<stdio.h>
using namespace std;
static unsigned long long a[20005],b[20005]; 
void merge(unsigned long long low, unsigned long long mid ,unsigned long long high)
{   unsigned long long i,j,h,k;
        i=low;
        h=low;
        j=mid+1;
    while(h<=mid && j<=high)
    {   if(a[h]<=a[j])
            b[i++]=a[h++];
        else
            b[i++]=a[j++];
    }
    if(h>mid)
    { for(k=j;k<=high;k++)
        {   b[i++]=a[k];
        }
    }else
    {   for(k=h;k<=mid;k++)
        {   b[i++]=a[k];
        }
    }
    for(k=low;k<=high;k++)
        a[k]=b[k];
}
void merge_sort(unsigned long long low,unsigned long long high)
{   unsigned long long mid=low+(high-low)/2;
    if(low<high)
    {   merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);
    }
}   
int main()
{   unsigned long long t,i,n,k,min;
    scanf("%llu",&t);
    while(t--)
    {   scanf("%llu %llu",&n,&k);
        min=1000000000;
        for(i=0;i<n;i++)
        {   scanf("%llu",&a[i]);
        }
        merge_sort(0,n-1);
        for(i=0;i<=n-k;i++)
        {   if(a[i+k-1]-a[i]<min)
                min=a[i+k-1]-a[i];
        }
        printf("%llu\n",min);
    }

    return 0;
}