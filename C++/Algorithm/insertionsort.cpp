#include<iostream>
int main()
{   int n;
    scanf("%d",&n);
    int a[n],i,j,k,temp;
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {   j=i;
        while(j>0 && a[i]<a[j-1])
        {   j--;
        }
        temp=a[i];
        for(k=i;k>j;k--)
        {   a[k]=a[k-1];
        }
        a[j]=temp;
    }
    for(i=0;i<n;i++)
    {   printf("%d\n",a[i]);
    }
    return 0;
}