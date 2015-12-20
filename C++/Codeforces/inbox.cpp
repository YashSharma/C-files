#include<iostream>
#include<stdio.h>
int main()
{   int n,count=0,start=1,pos=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {   scanf("%d",&a[i]);
        if(a[i]==1)
        {   if(start)
            {   pos=i;
                start=0;
            }
            if((i-pos)>1)
                count=count+2;
            else
                count++;
            pos=i;
        }
    }
    printf("%d\n",count);
    return 0;
}