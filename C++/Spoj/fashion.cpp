#include<iostream>
static int b[1001];
void merge(int low, int mid ,int high,int a[1001])
{   int i,j,h,k;
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
    for(i=low;i<=high;i++)
        a[i]=b[i];
}
void merge_sort(int low,int high,int a[1001])
{   int mid=low+(high-low)/2;
    if(low<high)
    {   merge_sort(low,mid,a);
        merge_sort(mid+1,high,a);
        merge(low,mid,high,a);
    }
}   
int main()
{   int n,t,sum,i,j;
    static int c[1001],d[1001];
    scanf("%d",&n);
    while(n--)
    {   sum=0;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        { scanf("%d",&c[i]); }
        for(i=0;i<t;i++)
        { scanf("%d",&d[i]);
        }
        merge_sort(0,t-1,c);
        merge_sort(0,t-1,d);
        for(i=0;i<t;i++)
        {   sum=sum+(c[i]*d[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}