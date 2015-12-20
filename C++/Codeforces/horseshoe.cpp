#include<iostream>
#define __STDC_FORMAT_MACROS
#include<stdio.h>
#include<inttypes.h>
int main()
{   uint64_t a[4];
    int num=0;
    scanf("%"PRIu64,&a[0]);
    for(int i=1;i<4;i++)
    {    scanf("%"PRIu64,&a[i]);
        for(int j=i-1;j>=0;j--)
        { if(a[j]==a[i])
            {    num++; break; }
        }
    }
    printf("%d\n",num);
    return 0;
}