#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{   int n,max=1,i,num=1;
    scanf("%d",&n);
    int a[n],count=1;
    for(i=0;i<n;i++)
    {   scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=1;i<n;i++)
    {   if(a[i]==a[i-1])
        {   count++;
            if(count>max)
                max=count;
        }
        else
        {   count=1;
            num++;
        }
    }
    printf("%d %d\n",max,num);
}