#include<iostream>
#include<stdio.h>
int main()
{   int n,t,t2,i;
    scanf("%d %d",&n,&t);
    int a[n];
    for(i=0;i<n-1;i++)
    {   scanf("%d",&a[i]);
    }
    while(t>1)
    {   t2=t;
        for(i=1;i<=(n-1);i++)   
        {    if((t2-i)==a[i-1])
            {   t=t-i; break;      }
            else if((t2-i)<1)
            {   t=-1;   break; }
        }
        if(t==1)
        {   printf("YES\n");
            return 0;
        }
        else if(t==-1)
        {   printf("NO\n");
            return 0;
        }
    }
    return 0;
}