#include<iostream>
#include<stdio.h>
int main()
{   int n,m,k,h,count=0,i;
    scanf("%d %d %d",&n,&m,&k);
    int a[m+1],c;
    for(i=0;i<(m+1);i++)
    {   scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {   h=0;
        c=a[m]^a[i];
        while(c)
        {   if(c%2)
                h++;
            c=c/2;
        }
        if(h<=k)
        {   count++;
        }
    }
    printf("%d\n",count);
    return 0;
    
}