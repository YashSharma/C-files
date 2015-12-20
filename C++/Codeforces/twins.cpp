#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[101];
int sum(int p,int q)
{   int i,sum=0;
    if(p>q)
    {   return sum;
    }
    for(i=p;i<=q;i++)
    {   sum+=a[i];
    }
    return sum;
}
int main()
{   int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }   
    sort(a,a+n);
    i=n-1;
    while(sum(i,n-1)<=sum(0,i-1))
    {   i--;
    }
    printf("%d\n",n-i);
}