#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{   int n,i,k,count=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }
    sort(a,a+n);
    i=0;
    while(5-a[i++]>=k)
    {   count++;
    }
    printf("%d\n",count/3);
    return 0;   
}