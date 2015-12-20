#include<iostream>
#include<stdio.h>
int main()
{   int n,x,i,sum=0,count=1;
    scanf("%d %d",&n,&x);
    int a[n],y=x;
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);    
        sum+=a[i];
    }
    if(sum<0)
        sum*=-1;
    if(sum==0)
    {    printf("0\n");
         return 0;
    }
    if(sum<=x)
    {   printf("%d\n",count);
        return 0;
    }else
    { 
        while(sum>y)
        {   y=y+x;
            count=count+1;
        }
        printf("%d\n",count);
        return 0;
    }
}