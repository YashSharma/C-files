#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{   int n,count=0,i,j,k=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }   
    sort(a,a+n);
    while(k)
    {
    for(i=1;i<n;i++)
    {   if(a[i]==a[i-1])
        {   j=i+1; 
            while(a[j]==a[i])
            {   a[j]=a[j]+j-i+1;
                count=count+(j-i+1); 
            }
            a[i]=a[i]+1;     
            count++; 
            i=j;
        }
    }
    sort(a,a+n);
    k=0;
    for(i=1;i<n;i++)
    {   if(a[i]==a[i-1])
        {   k=1;    break;  }
    }
    }
    printf("%d\n",count);
    return 0;
}