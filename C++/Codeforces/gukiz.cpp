#include<iostream>
#include<stdio.h>
int main()
{   int n,i,j,rank;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]); }
    for(i=0;i<n;i++)
    {  rank=0;
        for(j=0;j<n;j++)
        {   if(a[j]>a[i])
                rank++;
        }
        printf("%d ",rank+1);
    }
    printf("\n");
    return 0;
}