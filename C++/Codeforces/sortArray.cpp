#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{   int n,start=0,end=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {   if(a[i]<a[i-1])
        {    start=i-1;   break;  }
    }
    for(i=start+1;i<n;i++)
    {   if(a[i]>a[i-1])
        {   end=i-1;  break;
        }
        if(i==n-1 && end==0)
        {   end=n-1;
        }
    }
    sort(a+start,a+end+1);
    for(i=1;i<n;i++)
    {   if(a[i]<a[i-1])
        {   printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    printf("%d %d\n",start+1,end+1);
    return 0;
    
}