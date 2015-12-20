#include<iostream>
#include<stdio.h>
int main()
{   int n,i,start=0,end=0,max=0,k,j,count=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {   if(a[i]==0) 
        {   start=i;    break;  }
    }
    for(i=n-1;i>0;i--)
    {   if(a[i]==0)
        {   end=i;  break; }
    }
    if(start==end)
    {   a[k]=1-a[k];
        for(k=0;k<n;k++)
        {   if(a[k]==1) count++;    }
        printf("%d\n",count);
        return 0;
    
    }
    
    for(i=start;i<=end;i++)
    {   for(j=i;j<=end;j++)
        {   count=0;
            for(k=0;k<n;k++)
            {   b[k]=a[k];  }
            for(k=i;k<=j;k++)
            {   b[k]=1-b[k];    }
            for(k=0;k<n;k++)
            {   if(b[k]==1) count++;    }
            if(count>max)
                max=count;
        }
    }
    printf("%d\n",max);
    return 0;
}