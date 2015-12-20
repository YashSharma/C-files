#include<iostream>
#include<stdio.h>
int main()
{   int n,c1=0,c2=0,c3=0,min,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
        if(a[i]==1)
           c1++;
        else if(a[i]==2)
            c2++;
        else if(a[i]==3)
            c3++;
    }
    min=c1;
    if(c2<min)
        min=c2;
    if(c3<min)
        min=c3;
    i=0;
    j=0;
    k=0;
    printf("%d\n",min);
    while(min--)
    {   while(a[i]!=1)
            i++;
        while(a[j]!=2)
            j++;
        while(a[k]!=3)
            k++;
        printf("%d %d %d\n",++i,++j,++k);
    }
    return 0;
}