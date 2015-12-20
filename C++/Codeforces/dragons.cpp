#include<iostream>
#include<stdio.h>
static int x[1001],y[1001],a[1001],b[1001];
void merge(int low,int mid,int high)
{   int k,h=low,i=low,j=mid+1;
    while(h<=mid && j<=high)
    {   if(x[h]<=x[j])
        {   a[i]=x[h];
            b[i++]=y[h++];
        }else
        {   a[i]=x[j];
            b[i++]=y[j++];
        }
    }
    if(h<=mid)
    {   for(k=h;k<=mid;k++)
        {   a[i]=x[k];
            b[i++]=y[k];
        }
    }
    else
    {   for(k=j;k<=high;k++)
        {   a[i]=x[k];
            b[i++]=y[k];
        }
    }
    for(i=low;i<=high;i++)
    {   x[i]=a[i];
        y[i]=b[i];
    }
}
void merge_sort(int low,int high)
{   int mid=low+(high-low)/2;
    if(low<high)
    {   merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);
    }
}
int main()
{   int n,s,i;
    scanf("%d %d",&s,&n);
    for(i=0;i<n;i++)
    {   scanf("%d %d",&x[i],&y[i]);
    }
    merge_sort(0,n-1);
    for(i=0;i<n;i++)
    {   if(s>x[i])
            s=s+y[i];
        else
        {   printf("NO\n");
            return 0; }
    }
    printf("YES\n");
    return 0;
}