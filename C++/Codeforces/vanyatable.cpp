#include<iostream>
#include<stdio.h>
int main()
{   int n,x1,x2,y1,y2,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        count+=((x2-x1+1)*(y2-y1+1));
    }
    printf("%d\n",count);
    return 0;
}