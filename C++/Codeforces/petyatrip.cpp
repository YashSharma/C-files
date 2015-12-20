#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{   int k,a[12],i,sum=0;
    scanf("%d",&k);
    for(i=0;i<12;i++)
    {   scanf("%d",&a[i]);
    }
    sort(a,a+12);
    i=11;
    while(sum<k)
    {   if(i==-1)
        {   printf("-1\n");
            return 0;
        }
        sum=sum+a[i];
        i--;
    }
    printf("%d\n",11-i);
    
    return 0;
}