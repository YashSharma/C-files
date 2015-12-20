#include<iostream>
int a[10000],b[10000];
void merge(int low,int mid,int high)
{   int i=low,h=low,j=mid+1,k=high,m;
    while(h<=mid && j<=high)
    {   if(a[h]<=a[j])
            b[i++]=a[h++];
        else
            b[i++]=a[j++];
    }
    if(h<=mid)
    {   for(m=h;m<=mid;m++)
        {   b[i++]=a[m];
        }
    }else
    {   for(m=j;m<=high;m++)
        {   b[i++]=a[m];
        }
    }
    for(i=low;i<=high;i++)
    {   a[i]=b[i];
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
{   int i,j;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }
    merge_sort(0,n-1);
    for(i=0;i<n;i++)
    {   printf("%d\n",a[i]);
    }
    return 0;
}