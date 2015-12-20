#include<iostream>
#include<stdio.h>
using namespace std;
static int a[100],b[100]; 
void merge(int low, int mid ,int high)
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
void merge_sort(int low,int high)
{   int mid=low+(high-low)/2;
    if(low<high)
    {   merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);
    }
}   
int main()
{ int i,j,n;
    cout<<"enter length";
    cin>>n;
    for(i=0;i<n;i++)
    {   cin>>a[i];
    }
    merge_sort(0,n-1);
    for(i=0;i<n;i++)
    {   cout<<a[i]<<endl;
    }
    return 0;
}

    
   